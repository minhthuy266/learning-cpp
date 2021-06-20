#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct sinhVien
{
	int ma;
	char ten[255];
};

int main(int argc, char** argv) {
	sinhVien teo;
	teo.ma=266;
	strcpy(teo.ten,"Teo");
	cout<<"Thong tin cua Teo: \n";
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	sinhVien *pTeo=&teo;
	cout<<"Thong tin cua Teo theo con tro: \n";
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	pTeo->ma=1000;
	strcpy(pTeo->ten,"Teo2");
	cout<<"Thong tin cua Teo sau khi thay doi: \n";
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	teo.ma=9999;
	strcpy(teo.ten,"Teo 9999");
	cout<<"Thong tin cua Teo theo con tro: \n";
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	
	sinhVien *pTy;
	pTy=new sinhVien;
	pTy->ma=114;
	strcpy(pTy->ten,"Ty");
	cout<<"Thong tin cua Ty: \n";
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
	
	sinhVien *pTy2=pTy;
	pTy2->ma=214;
	cout<<"Thong tin pTy sau khi pTy2 doi: \n";
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
		
	return 0;
}
