#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	double x,A;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap x: ";
	cin>>x;
	
	A=pow((pow(x,2)+x+1),n)+pow((pow(x,2)-x+1),n);
	
	cout<<"Gia tri cua bieu thuc A la: "<<A<<endl;
	
	return 0;
}
