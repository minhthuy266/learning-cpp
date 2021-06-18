#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int chuvi(int a,int b,int c);
double dientich(int a,int b,int c);
bool tamgiac(int a,int b,int c);

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Nhap canh a: ";
	cin>>a;
	
	cout<<"Nhap canh b: ";
	cin>>b;
	
	cout<<"Nhap canh c: ";
	cin>>c;
	
	if(tamgiac(a,b,c)==false)
	{
		cout<<"Tam giac khong hop le\n";
		return -1;
	}
	
	int cv=chuvi(a,b,c);
	double dt=dientich(a,b,c);
	
	cout<<"Chu vi = "<<cv<<endl;
	cout<<"Dien tich = "<<dt<<endl;
	
	return 0;
}

int chuvi(int a,int b,int c)
{
	return a+b+c;
}

double dientich(int a,int b,int c)
{
	double p=chuvi(a,b,c)/2*1.0;
	double dt=sqrt(p*(p-a)*(p-b)*(p-c));
	return dt;
}

bool tamgiac(int a,int b,int c)
{
	if(a<=0 || b<=0 || c<=0 || (a+b)<=c || (a+c)<=b || (b+c)<=a)
		return false;
	return true;
}
