#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct book
{
	char ISBN[20];
	char ten[150];
	int trang;
	char tacGia[150];
};

void nhapSach(book &b)
{
	cout<<"Nhap ISBN: ";
	gets(b.ISBN);
	cout<<"Nhap ten: ";
	gets(b.ten);
	cout<<"Nhap trang: ";
	cin>>b.trang;
	cin.ignore();
	cout<<"Nhap tac gia: ";
	gets(b.tacGia);
}

void nhapDanhSach(book dsSach[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap sach thu: "<<i<<"\n";
		nhapSach(dsSach[i]);
	}
}

void xuatSach(book b)
{
	cout<<b.ISBN<<"\t"<<b.ten<<"\t"<<b.tacGia<<"\t"<<b.trang<<endl;
}

void xuatDanhSach(book dsSach[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuatSach(dsSach[i]);
	}
}

void luuFile(book dsSach[],int n)
{
	ofstream outfile("csdlbook.txt",ofstream::binary);
	for(int i=0;i<n;i++)
	{
		book b=dsSach[i];
		outfile.write((char*)&b,sizeof(book));
	}
	outfile.close();
}

void docFile(book dsSach[],int &n)
{
	ifstream infile("csdlbook.txt",ifstream::binary);
	infile.seekg(0,infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	n=size/sizeof(book);
	for(int i=0;i<n;i++)
	{
		book b;
		infile.read((char*)&b,sizeof(book));
		dsSach[i]=b;
	}
	infile.close();
}

void timSach(book dsSach[],int n,char *tg)
{
	for(int i=0;i<n;i++)
	{
		book b=dsSach[i];
		int kq=strcmp(b.tacGia,tg);
		if(kq==0)
		{
			xuatSach(b);
		}
	}
}

void xuatTop2(book dsSach[],int n)
{
	int m=n<2?n:2;
	for(int i=0;i<m;i++)
	{
		xuatSach(dsSach[i]);
	}
}

void sapXep(book dsSach[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			book b1=dsSach[i];
			book b2=dsSach[i];
			if(b1.trang<b2.trang)
			{
				dsSach[i]=b2;
				dsSach[j]=b1;
			}
		}
	}
}

int main(int argc, char** argv) {
	/*book dsSach[3];
	nhapDanhSach(dsSach,3);
	cout<<"Sach sau khi nhap: \n";
	xuatDanhSach(dsSach,3);
	luuFile(dsSach,3);*/
	
	int max=1000;
	book dsSach[max];
	int n;
	docFile(dsSach,n);
	xuatDanhSach(dsSach,n);
	cout<<"\n--------------------------------------------------------------\n";
	cout<<"Nhap tac gia: ";
	
	char tg[150];
	gets(tg);
	timSach(dsSach,n,tg);
	
	sapXep(dsSach,n);
	cout<<"\n--------------------------------------------------------------\n";
	cout<<"Danh sach sau khi sap xep: \n";
	xuatDanhSach(dsSach,n);
	
	cout<<"\n--------------------------------------------------------------\n";
	cout<<"Top 2: \n";
	xuatTop2(dsSach,n);
	
	return 0;
}
