#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void luuFile(int number)
{
	FILE *file=fopen("csdl.txt","a");
	char str[5];
	itoa(number,str,10); // 10 la thap phan, 16 la hexa, 8 la octal, 2 la binary
	fputs(str,file);
	fputs("\n",file);
	fclose(file);
}

int main(int argc, char** argv) {
	while(true)
	{
		int number;
		cout<<"Nhap so: ";
		cin>>number;
		luuFile(number);
		char h;
		cout<<"Nhap tiep khong? (c/k): ";
		cin>>h;
		if(h=='k')
			break;
	}
	cout<<"Ban da nhap xong!\n";
	FILE *file=fopen("csdl.txt","r");
	int mChan[1000],iChan=0;
	while(true)
	{
		char *line="\0";
		char buffer[5];
		line=fgets(buffer,5,file);
		if(line!=NULL)
		{
			int number=atoi(line);
			if(number%2==0)
			{
				mChan[iChan++]=number;
			}
			cout<<number<<endl;
		}
		else
		{
			break;
		}
	}
	fclose(file);
	cout<<"\nCac so chan: ";
	for(int i=0;i<iChan;i++)
	{
		cout<<mChan[i]<<"\t";
	}
	return 0;
}
