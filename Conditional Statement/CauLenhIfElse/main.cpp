#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	cout<<"Nhap so nguyen bat ky: ";
	cin>>a;
	if(a>=0)
	{
		cout<<a<<" la so duong\n";
	} else {
		cout<<a<<" la so am\n";
	}
	return 0;
}
