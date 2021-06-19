#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int *p;
	p=new int; // Cap phat bo nho cho con tro p
	*p=100; // Gan gia tri =100 tai o bo nho ma p dang tro toi
	cout<<"Dia chi tai con tro p="<<p<<endl;
	cout<<"Gia tri tai dia chi ma con tro p tro toi= "<<*p<<endl;
	delete p; // Bi loi Memory leak neu khong thu hoi bo nho
	return 0;
}
