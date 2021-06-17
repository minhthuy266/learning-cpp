#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,h;
	double dientich;
	cout<<"Chuong trinh tinh dien tich tam giac\n";
	cout<<"Nhap chieu dai a: ";
	cin>>a;
	cout<<"Nhap chieu cao: ";
	cin>>h;
	dientich=1.0/2*a*h;
	cout<<"Dien tich hinh tam giac la: "<<dientich<<endl;
	
	
	return 0;
}
