#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1. Chi co 2 phep toan: + -
2. Vi du con tro p1 la mot con tro nguyen co gia tri 2000
Gia su so nguyen chiem 2 bytes bo nho
=> p1++ tro toi 2002
=> p1-- tro toi 1998
3. Cong tru so nguyen voi con tro
*/


int main(int argc, char** argv) {
	int a=20,b=15;
	int *pa,*pb,t;
	pa=&a;
	pb=&b;
	
	t=*pa;
	*pa=*pb;
	*pb=t;
	
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"Dia chi cua con tro pa="<<pa<<endl;
	pa++;
	cout<<"Dia chi cua con tro pa="<<pa<<endl;
	
	return 0;
}
