#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tong2so(int a,int b);
void xuatdulieu(int x);
void output(); //prototype

int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap a: ";
	cin>>a;
	
	cout<<"Nhap b: ";
	cin>>b;
	
	int kq=tong2so(a,b);
	cout<<"Tong "<<a<<"+"<<b<<"="<<kq;
	
	int kq2=tong2so(113,114);
	cout<<"\nkq2="<<kq2<<endl;
	
	int kq3=tong2so(5,1);
	xuatdulieu(kq3);
	
	cout<<"\nHam goi ham:\n";
	output();
	
	return 0;
}



int tong2so(int a,int b)
{
	return a+b;
}

void xuatdulieu(int x)
{
	cout<<x<<endl;
}

void output()
{
	int kq=tong2so(9,10);
	xuatdulieu(kq);
}
