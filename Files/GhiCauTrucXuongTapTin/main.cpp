#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct nhanVien
{
	int ma;
	char ten[50];
};

void luuFile()
{
	nhanVien dsNV[4];
	dsNV[0].ma=1;
	strcpy(dsNV[0].ten,"Teo");
	dsNV[1].ma=2;
	strcpy(dsNV[1].ten,"Ty");
	dsNV[2].ma=3;
	strcpy(dsNV[2].ten,"Bin");
	dsNV[3].ma=4;
	strcpy(dsNV[3].ten,"Bo");
	
	ofstream outfile("csdl.txt",ofstream::binary);
	outfile.write((char*)dsNV,sizeof(dsNV));
	outfile.close();
}

void xuatNhanVien(nhanVien dsNV[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<dsNV[i].ma<<"\t"<<dsNV[i].ten<<endl;
	}
}

void docFile()
{
	ifstream infile("csdl.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	int real=size/sizeof(nhanVien);
	nhanVien dsNV[real];
	infile.read((char*)dsNV,sizeof(dsNV));
	infile.close();
	xuatNhanVien(dsNV,real);
}

int main(int argc, char** argv) {
//	luuFile();
	docFile();
	return 0;
}
