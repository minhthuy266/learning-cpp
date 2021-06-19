#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
1. Void la mot con tro dac biet ma co the tro den bat ky kiu du lieu nao
Cu phap:
	void *pointerVariable
	void *p;
=> Can phai ep ve dung kieu tuong ung khi dung trong bieu thuc
	(*(int*)p)+10;

2. Con tro hien hanh khong tro den 1 dia chi hop le thi duoc gan gia tri NULL
=> Chuong trinh dung con tro null => run-time error
*/



int main(int argc, char** argv) {
	int a=5;
	float f=5.5;
	int *pa=&a;
	float *pf=&f;
	void *p;
	
	p=&a;
	(*(int*)p)=10;
	cout<<"a="<<a<<endl;
	
	p=&f;
	(*(float*)p)=10.4;
	cout<<"f="<<f<<endl;
	
	int *y=new int;
	*y=123;
	cout<<"Gia tri cua o nho ma y quan ly ="<<*y<<endl;
	
	return 0;
}
