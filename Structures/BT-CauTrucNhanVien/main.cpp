#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct diaChi
{
	char tenDuong[255];
	char quan[150];
	char tinhThanh[150];
};

struct nhanVien
{
	int ma;
	char ten[255];
	int tuoi;
	diaChi coQuan;
	diaChi nhaRieng;
};

int main(int argc, char** argv) {
	nhanVien teo;
	teo.ma=1;
	strcpy(teo.ten,"Teo");
	teo.tuoi=23;
	strcpy(teo.coQuan.tenDuong,"So 1 LLQ");
	strcpy(teo.coQuan.quan,"Ha Dong");
	strcpy(teo.coQuan.tinhThanh,"Ha Noi");
	strcpy(teo.nhaRieng.tenDuong,"So 2 AC");
	strcpy(teo.nhaRieng.quan,"Ha Dong");
	strcpy(teo.nhaRieng.tinhThanh,"Ha Noi");
	
	cout<<"Thong tin cua Teo: \n";
	cout<<"Ma = "<<teo.ma<<endl;
	cout<<"Ten = "<<teo.ten<<endl;
	cout<<"Tuoi = "<<teo.tuoi<<endl;
	cout<<"Dia chi co quan: "<<teo.coQuan.tenDuong<<", "<<teo.coQuan.quan<<", "<<teo.coQuan.tinhThanh<<endl;
	cout<<"Dia chi nha: "<<teo.nhaRieng.tenDuong<<", "<<teo.nhaRieng.quan<<", "<<teo.nhaRieng.tinhThanh<<endl;
	
	cout<<"\n--------------------------------------------------\n";
	
	nhanVien *pTy=new nhanVien;
	pTy->ma=2;
	strcpy(pTy->ten,"Ty");
	pTy->tuoi=24;
	strcpy(pTy->coQuan.tenDuong,"So 1111 LLQ");
	strcpy(pTy->coQuan.quan,"Ha Dong");
	strcpy(pTy->coQuan.tinhThanh,"Ha Noi");
	strcpy(pTy->nhaRieng.tenDuong,"So 2222 AC");
	strcpy(pTy->nhaRieng.quan,"Ha Dong");
	strcpy(pTy->nhaRieng.tinhThanh,"Ha Noi");
	
	cout<<"Thong tin cua Ty: \n";
	cout<<"Ma = "<<pTy->ma<<endl;
	cout<<"Ten = "<<pTy->ten<<endl;
	cout<<"Tuoi = "<<pTy->tuoi<<endl;
	cout<<"Dia chi co quan: "<<pTy->coQuan.tenDuong<<", "<<pTy->coQuan.quan<<", "<<pTy->coQuan.tinhThanh<<endl;
	cout<<"Dia chi nha: "<<pTy->nhaRieng.tenDuong<<", "<<pTy->nhaRieng.quan<<", "<<pTy->nhaRieng.tinhThanh<<endl;
	
	return 0;
}
