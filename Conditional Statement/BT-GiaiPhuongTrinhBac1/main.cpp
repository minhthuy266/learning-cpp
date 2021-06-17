#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	cout<<"GIAI PHUONG TRINH BAC 1: ax+b=0 \n";
	cout<<"Nhap he so a: ";
	cin>>a;
	cout<<"Nhap he so b: ";
	cin>>b;
	
	if(a==0 && b==0) 
	{
		cout<<"Phuong trinh co vo so nghiem";
	}
	else if(a==0 && b!=0)
	{
		cout<<"Phuong trinh vo nghiem";
	} 
	else {
		cout<<"Phuong trinh co nghiem la: "<<-b*1.0/a;
	}
	
	return 0;
}
