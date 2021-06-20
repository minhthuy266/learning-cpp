#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct phanSo
{
	int tu;
	int mau;
};

phanSo *cong(phanSo ps1,phanSo ps2);
int ucln(phanSo ps);
phanSo *toiGian(phanSo ps);

int main(int argc, char** argv) {
	phanSo ps1;
	ps1.tu=3;
	ps1.mau=5;
	
	phanSo ps2;
	ps2.tu=1;
	ps2.mau=10;
	
	phanSo *ps3=cong(ps1,ps2);
	cout<<ps3->tu<<"/"<<ps3->mau<<endl;
	
	cout<<"Phan so toi gian: \n";
	phanSo *ps4=toiGian(*ps3);
	cout<<ps4->tu<<"/"<<ps4->mau<<endl;
	
	return 0;
}

phanSo *cong(phanSo ps1,phanSo ps2)
{
	phanSo *ps3=new phanSo;
	ps3->tu=ps1.tu*ps2.mau+ps1.mau*ps2.tu;
	ps3->mau=ps1.mau*ps2.mau;
	return ps3;
}

int ucln(phanSo ps)
{
	int min=ps.tu<ps.mau?ps.tu:ps.mau;
	for(int i=min;i>=1;i--)
	{
		if(ps.tu%i==0 && ps.mau%i==0)
		{
			return i;
		}
	}
	return 1;
}

phanSo *toiGian(phanSo ps)
{
	int uoc=ucln(ps);
	phanSo *psToiGian=new phanSo;
	psToiGian->tu=ps.tu/uoc;
	psToiGian->mau=ps.mau/uoc;
	return psToiGian;
}
