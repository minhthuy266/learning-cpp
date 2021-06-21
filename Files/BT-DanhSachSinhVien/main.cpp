#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct sinhVien
{
	int ma;
	char ten[255];
	double dtb;
};

sinhVien *nhapSinhVien()
{
	sinhVien *nv=new sinhVien;
	cout<<"Nhap ma: ";
	cin>>nv->ma;
	cin.ignore();
	cout<<"Nhap ten: ";
	gets(nv->ten);
	cout<<"Nhap diem: ";
	cin>>nv->dtb;
	return nv;
};

void nhapDanhSach(sinhVien **&dSSv,int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<"Nhap nhan vien thu "<<i<<"\n";
		sinhVien *sv=nhapSinhVien();
		*(dSSv+i)=sv;
	}
}
	
void xuatSinhVien(sinhVien *nv)
{
	cout<<nv->ma<<"-"<<nv->ten<<"-"<<nv->dtb<<endl;
}

void xuatDanhSach(sinhVien **dSSv,int siso)
{
	for(int i=0;i<siso;i++)
	{
		sinhVien *sv=*(dSSv+i);
		xuatSinhVien(sv);
	}
}

void luuFile(sinhVien **dSSv,int siso)
{
	ofstream outfile("csdlsv.txt",ofstream::binary);
	for(int i=0;i<siso;i++)
	{
		sinhVien *sv=*(dSSv+i);
		outfile.write((char*)sv,sizeof(sinhVien));
	}
	outfile.close();
	
}

void docFile(sinhVien **&dSSv,int &siso)
{
	ifstream infile("csdlsv.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	siso=size/sizeof(sinhVien);
	dSSv=new sinhVien*[siso];
	for(int i=0;i<siso;i++)
	{
		sinhVien *sv=new sinhVien;
		infile.read((char*)sv,sizeof(sinhVien));
		*(dSSv+i)=sv;
	}
	infile.close();
}

int main(int argc, char** argv) {
	/*int siso=3;
	sinhVien **dSSv=new sinhVien*[siso];
	nhapDanhSach(dSSv,siso);
	cout<<"Danh sach sinh vien sau khi nhap: \n";
	xuatDanhSach(dSSv,siso);
	luuFile(dSSv,siso);
*/
	int siso;
	sinhVien **dSSv=NULL;
	docFile(dSSv,siso);
	xuatDanhSach(dSSv,siso);
	return 0;
}
