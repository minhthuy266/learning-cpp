#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int *capPhatBoNho(int n);
void nhapMang(int *&pM,int n);
void xuatMang(int *pM,int n);
int *danhSachMax(int *pM,int n);
void sapGiam(int *&pM,int n);

int main(int argc, char** argv) {
	srand(time(NULL));
	int *pM=capPhatBoNho(6);
	nhapMang(pM,6);
	cout<<"Mang ngau nhien: \n";
	xuatMang(pM,6);
	
	int *pX=danhSachMax(pM,6);
	cout<<"\nBa phan tu lon nhat: \n";
	xuatMang(pX,3);
	
	
	return 0;
}

int *capPhatBoNho(int n)
{
	int *pM=new int[n];
	return pM;
}

void nhapMang(int *&pM,int n)
{
	for(int i=0;i<n;i++)
	{
		*(pM+i)=rand()%100;
	}		
}

void xuatMang(int *pM,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(pM+i)<<"\t";
	}
}

int *danhSachMax(int *pM,int n)
{
	int m=n>3?3:n;
	int *pX=capPhatBoNho(m);
	sapGiam(pM,n);
	for(int i=0;i<m;i++)
	{
		*(pX+i)=*(pM+i);
	}
	return pX;
	
}

void sapGiam(int *&pM,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int a=*(pM+i);
			int b=*(pM+j);
			if(a<b)
			{
				int t=*(pM+i);
				*(pM+i)=*(pM+j);
				*(pM+j)=t;
			}
		}
	}
}
