#include <iostream>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void luuText()
{
	FILE *file=fopen("csdl.txt","w");
	fputs("sv01;Nguyen Van A;1/1/1997\n",file);
	fputs("sv02;Nguyen Van B;8/6/1998\n",file);
	fputs("sv02;Nguyen Thi C;1/6/1996\n",file);
	fclose(file);
}

void docText()
{
	FILE *file=fopen("csdl.txt","r");
	char *s="\0";
	do
	{
		char line[150];
		s=fgets(line,150,file);
		if(s==NULL)
			break;
		cout<<s<<endl;
	}
	while(true);
	fclose(file);
}

int main(int argc, char** argv) {
	docText();
	return 0;
}
