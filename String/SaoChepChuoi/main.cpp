#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25],str2[55];
	cout<<"Nhap chuoi 1: ";
	gets(str1);
	cout<<"Chuoi 2: ";
	strcpy(str2,str1);
	cout<<str2;
	
	char str3[6];
	strncpy(str3,str1,6);
	cout<<"\nChuoi 3: ";
	cout<<str3;
	
	return 0;
}
