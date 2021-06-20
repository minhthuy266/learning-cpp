#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool gender(char *str);

int main(int argc, char** argv) {
	char **dSSv=new char*[5];
	for(int i=0;i<5;i++)
	{
		*(dSSv+i)=new char[255];
	}
	strcpy(*(dSSv+0),"SV1; A; male");
	strcpy(*(dSSv+1),"SV1; B; male");
	strcpy(*(dSSv+2),"SV1; C; female");
	strcpy(*(dSSv+3),"SV1; D; male");
	strcpy(*(dSSv+4),"SV1; E; female");
	
	int sonam=0;
	int sonu=0;
	
	for(int i=0;i<5;i++)
	{
		cout<<*(dSSv+i)<<endl;
		bool kq=gender(*(dSSv+i));
		if(kq==false)
			sonam++;
		else
			sonu++;
	}
	
	cout<<"Co "<<sonam<<" sinh vien nam trong danh sach"<<endl;
	cout<<"Co "<<sonu<<" sinh vien nu trong danh sach"<<endl;
	
	return 0;
}

bool gender(char *str)
{
	int j=0;
	for(int i=strlen(str)-1;i>=0;i--)
	{
		if(str[i]==';')
		{
			j=i;
			break;
		}
	}
	
	char strGender[5];
	int i2=0;
	for(int i=j+2;i<strlen(str);i++)
	{
		strGender[i2]=str[i];
		i2++;
	}
	strGender[i2]='\0';
	if(strcmp(strGender,"male")==0)
		return false;
	return true;
	
}
