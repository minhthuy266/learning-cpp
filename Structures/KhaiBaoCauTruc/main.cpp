#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct diaChi
{
	char soNha[25];
	char tenDuong[250];
	char quan[25];
	char tinhThanh[25];
};

struct sinhVien
{
	char maSV[10];
	char tenSV[255];
	bool gender;
	diaChi diaChiNha;
	diaChi diaChiTruong;
}Thuy,Linh;

int main(int argc, char** argv) {
	strcpy(Thuy.tenSV,"Nguyen Minh Thuy");
	Thuy.gender=true;
	strcpy(Thuy.maSV,"2606");
	cout<<"\n------------------------------------\n";
	cout<<"Ma SV = "<<Thuy.maSV<<endl;
	cout<<"Ten = "<<Thuy.tenSV<<endl;
	cout<<"Gioi tinh = "<<(Thuy.gender==true?"Nu":"Nam")<<endl;
	cout<<"\n------------------------------------\n";
	
	sinhVien Bin;
	strcpy(Bin.tenSV,"Pham Van Bin");
	cout<<"Ten day du cua Bin: "<<Bin.tenSV;
	return 0;
}
