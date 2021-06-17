#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double xA,yA,xB,yB,AB;
	cout<<"Nhap vao gia tri xA: ";
	cin>>xA;
	
	cout<<"Nhap vao gia tri yA: ";
	cin>>yA;
	
	cout<<"Nhap vao gia tri xB: ";
	cin>>xB;
	
	cout<<"Nhap vao gia tri yB: ";
	cin>>yB;
	
	AB=sqrt(pow((xB-xA),2)+pow((yB-yA),2));
	
	cout<<"Do dai doan AB la: "<<AB<<endl;
	
	return 0;
}
