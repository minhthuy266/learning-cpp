#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhapMang(int *&a,int n);
void xuatMang(int *a,int n);
void sapXepGiamDan(int *&a,int n);
void swap(int *&pa,int *&pb);

int main(int argc, char** argv) {
	int *a;
	int n = 10;
	nhapMang(a,n);
	cout<<"Mang sau khi nhap:\n";
	xuatMang(a,n);
	
	sapXepGiamDan(a,n);
	cout<<"\nMang sau khi sap xep:\n";
	xuatMang(a,n);
	
	return 0;
}

void nhapMang(int *&a,int n)
{
	srand(time(NULL));
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		*(a+i)=rand()%100;
	}
	
}

void xuatMang(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<*(a+i)<<"\t";
	}
}

void swap(int *&pa,int *&pb)
{
	int temp=*pa;
	*pa=*pb;
	*pb=temp;
}

void sapXepGiamDan(int *&a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(*(a+i)<*(a+j))
			{
				swap(*(a+i),*(a+j));
			}
		}
	}
}
