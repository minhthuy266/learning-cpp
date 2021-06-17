#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double a,b,c,max;
	cout<<"Nhap a: ";
	cin>>a;
	
	cout<<"Nhap b: ";
	cin>>b;
	
	cout<<"Nhap c: ";
	cin>>c;
	
	max=a;
	
	if(max<b)
	{
		max=b;
	}
	else if(max<c)
	{
		max=c;
	}
	else 
	{
		max=a;
	}
	
	cout<<"So lon nhat la: "<<max<<endl;
	
	return 0;
}
