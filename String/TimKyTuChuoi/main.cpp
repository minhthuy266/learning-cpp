#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25];
	strcpy(str1,"Hello");
	char *p=strchr(str1,'l');
	if(p!=NULL)
	{
		cout<<"Tim thay 'l' o vi tri = "<<p-str1<<endl;
	}
	else
	{
		cout<<"Khong tim thay 'l' trong chuoi";
	}
	
	char str2[250];
	strcpy(str2,"Hello World, C++, Tim Chuoi");
	char *p2=strstr(str2,"World");
	if(p2==NULL)
	{
		cout<<"Khong thay 'World' trong chuoi.";
	}
	else 
	{
		cout<<"Thay 'World' o vi tri = "<<p2-str2<<endl;
	}
	
	return 0;
}
