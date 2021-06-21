#include <iostream>
#include <string.h>
#include <fstream>
#define MAX 3
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct sanPham
{
	int ma;
	char ten[255];
	int gia;
};

void nhapSanPham(sanPham &sp);
void nhapDanhSach(sanPham dSSp[],int n);
void xuatSanPham(sanPham sp);
void xuatDanhSach(sanPham dSSp[],int n);
void luuFile(sanPham dSSp[],int n);
void docFile(sanPham dSSp[],int n);

int main(int argc, char** argv) {
	/*sanPham dSSp[MAX];
	nhapDanhSach(dSSp,MAX);
	cout<<"Danh sach san pham sau khi nhap: \n";
	xuatDanhSach(dSSp,MAX);
	luuFile(dSSp,MAX);*/
	
	sanPham dSSp[MAX];
	int n;
	docFile(dSSp,n);
	xuatDanhSach(dSSp,n);
	return 0;
}

void nhapSanPham(sanPham &sp)
{
	cout<<"Ma: ";
	cin>>sp.ma;
	cin.ignore();
	cout<<"Ten: ";
	gets(sp.ten);
	cout<<"Gia: ";
	cin>>sp.gia;
}

void nhapDanhSach(sanPham dSSp[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap san pham thu: "<<i<<"\n";
		nhapSanPham(dSSp[i]);
	}
}

void xuatSanPham(sanPham sp)
{
	cout<<sp.ma<<"-"<<sp.ten<<"-"<<sp.gia<<endl;
}

void xuatDanhSach(sanPham dSSp[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuatSanPham(dSSp[i]);
	}
}

void luuFile(sanPham dSSp[],int n)
{
	ofstream outfile("csdlsp.txt",ofstream::binary);
	for(int i=0;i<n;i++)
	{
		sanPham sp=dSSp[i];
		outfile.write((char*)&sp,sizeof(sanPham));
	}
	outfile.close();
}
void docFile(sanPham dSSp[],int n)
{
	ifstream infile("csdlsp.txt",ifstream::binary);
	int i=0;
	while(infile.eof()==false)
	{
		sanPham sp;
		infile.read((char*)&sp,sizeof(sanPham));
		dSSp[i++]=sp;
	}
	infile.close();
	n=i;
}
