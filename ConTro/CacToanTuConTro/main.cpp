#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
Dia chi: &
Gia tri: *
*/

int main(int argc, char** argv) {
	int count=100;
	int *m=&count;
	cout<<"Dia chi cua bien count="<<&count<<endl;
	cout<<"Gia tri cua bien count="<<count<<endl;
	cout<<"Dia chi cua con tro m="<<m<<endl;
	cout<<"Gia tri cua con tro m="<<*m<<endl;
	
	int p=*m;
	cout<<"Gia tri cua p="<<p<<endl;

	int *x=m;
	cout<<"Dia chi cua con tro x="<<x<<endl;
	cout<<"Gia tri cua con tro x="<<*x<<endl;
	
	
	cout<<"-----------------------------"<<endl;
	
	*x=15;
	cout<<"Dia chi cua con tro m="<<m<<endl;
	cout<<"Gia tri cua con tro m="<<*m<<endl;
	cout<<"Gia tri cua bien count="<<count<<endl;
	
	
	return 0;
}
