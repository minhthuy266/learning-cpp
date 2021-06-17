#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TINH TOAN SO HOC \n";
	int a,b;
	char ch;
	
	cout<<"Nhap so a: ";
	cin>>a;
	
	cout<<"Nhap so b: ";
	cin>>b;
	
	cout<<"Nhap phep toan (+,-,*,/): ";
	cin>>ch;
	
	switch(ch)
	{
		case '+':
			cout<<a<<"+"<<b<<"="<<(a+b);
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<(a-b);
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<(a*b);
			break;
		case '/':
			if(b==0) {
				cout<<"b phai khac 0";
			} 
			else 
			{
				cout<<a<<"/"<<b<<"="<<(a*1.0/b);	
			}
		
			break;
		default:
			cout<<"Ban nhap sai phep tinh roi";
	}
	
	return 0;
	
}
