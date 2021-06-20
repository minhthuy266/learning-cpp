#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct sinhVien 
{
	int maSV;
	char ten[255];
};

void nhapMang(sinhVien dSSv[], int siso);
void xuatMang(sinhVien dSSv[], int siso);

int main(int argc, char** argv) {
	int siso=3;
	sinhVien dSSv[3];
	nhapMang(dSSv,siso);
	xuatMang(dSSv,siso);
	return 0;
}

void nhapMang(sinhVien dSSv[], int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<"Nhap sinh vien thu "<<i<<"\n";
		cout<<"Nhap ma: ";
		cin>>dSSv[i].maSV;
		cout<<"Nhap ten: ";
		cin.ignore();
		gets(dSSv[i].ten);	
	}
}


void xuatMang(sinhVien dSSv[], int siso)
{
	for(int i=0;i<siso;i++)
	{
		cout<<dSSv[i].maSV<<"\t"<<dSSv[i].ten<<endl;
	}
}
