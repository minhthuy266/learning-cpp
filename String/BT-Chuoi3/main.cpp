#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tachLayTrai(char *strGoc,char *&strDau,char *&strCuoi);
void tachLayPhai(char *strGoc,char *&strSau,char *&strTruoc);

int main(int argc, char** argv) {
	char *strGoc=new char[255];
	strcpy(strGoc,"Hello World C++");
	char *strDau=new char[255];
	char *strCuoi=new char[255];
	strcpy(strDau,"");
	strcpy(strCuoi,"");
	tachLayTrai(strGoc,strDau,strCuoi);
	cout<<strDau<<endl;
	cout<<strCuoi<<endl;
	
	cout<<"\n---------------------------------\n";
	
	char *strTruoc=new char[255];
	char *strSau=new char[255];
	strcpy(strTruoc,"");
	strcpy(strSau,"");
	tachLayPhai(strGoc,strSau,strTruoc);
	cout<<strSau<<endl;
	cout<<strTruoc<<endl;
	return 0;
}

void tachLayTrai(char *strGoc,char *&strDau,char *&strCuoi)
{
	char *p=strchr(strGoc, ' ');
	int lSpace=p-strGoc;
	strncpy(strDau,strGoc,lSpace);
	p=p+1;
	strCuoi=p;
}

void tachLayPhai(char *strGoc,char *&strSau,char *&strTruoc)
{
	int j=0;
	for(int i=strlen(strGoc)-1;i>=0;i--)
	{
		if(strGoc[i]==' ')
		{
			j=i+1;
			break;
		}
	}
	
	int i2=0;
	for(int i=j;i<strlen(strGoc);i++)
	{
		strSau[i2]=strGoc[i];
		i2++;
	}
	
	strncpy(strTruoc,strGoc,j-1);
}

