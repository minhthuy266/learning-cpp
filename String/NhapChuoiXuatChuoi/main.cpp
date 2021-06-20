#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25];
	cout<<"Nhap chuoi:";
	gets(str1);
	
	cout<<"Chuoi sau khi nhap: \n";
	puts(str1);
	
	cout<<"\n--------------------------------\n";
	
	char *str2=new char[25];
	cout<<"Nhap chuoi:";
	gets(str2);
	
	cout<<"Chuoi sau khi nhap: \n";
	puts(str2);
	
	cout<<"\n--------------------------------\n";
	
	char str3[255];
	cout<<"Nhap chuoi:";
	cin.getline(str3,255);
	
	cout<<"Chuoi sau khi nhap: \n";
	cout<<str3<<endl;
	cout<<"Kich thuoc thuc su: \n";
	cout<<strlen(str3)<<endl;
	
	return 0;
}
