#include <iostream>
#include <math.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Nhap canh a: ";
	cin>>a;
	
	cout<<"Nhap canh b: ";
	cin>>b;
	
	cout<<"Nhap canh c: ";
	cin>>c;
	
	if(a<=0 || b<=0 || c<=0 || (a+b<=c) || (a+c<=b) || (b+c)<=a)
	{
		cout<<"a,b,c khong phai la 3 canh cua mot tam giac";
	}
	else 
	{
	int cv=a+b+c;
	double p=cv/2;
	double dt=sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout<<"Chu vi tam giac la: "<<cv<<endl;
	cout<<"Dien tich tam giac la: "<<dt<<endl;
	}
	
	return 0;
}
