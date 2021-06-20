#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct diem
{
	double x;
    double y;
};

double khoangCach(diem A,diem B);
double doDaiCacDiem(diem arrDiem[],int n);
void nhapToaDo(diem arrDiem[],int n);
void xuatToaDo(diem arrDiem[],int n);

int main(int argc, char** argv) {
	diem A;
	A.x=1;
	A.y=1;
	
	diem B;
	B.x=0;
	B.y=1;
	
	double kc=khoangCach(A,B);
	cout<<"Khoang cach tu A("<<A.x<<","<<A.y<<") -> B("<<B.x<<","<<B.y<<") = "<<kc<<endl;
	diem arrDiem[3];
	nhapToaDo(arrDiem,3);
	cout<<"Danh sach cac diem ban vua nhap: \n";
	xuatToaDo(arrDiem,3);
	cout<<"\nTong do dai = "<<doDaiCacDiem(arrDiem,3);
}

double khoangCach(diem A,diem B)
{
	return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}

double doDaiCacDiem(diem arrDiem[],int n)
{
	double tongkc=0;
	for(int i=0;i<n-1;i++)
	{
		double kc=khoangCach(arrDiem[i],arrDiem[i+1]);
		tongkc+=kc;
	}
	return tongkc;
}

void nhapToaDo(diem arrDiem[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap diem thu: "<<i<<endl;
		cout<<"Nhap toa do x = ";
		cin>>arrDiem[i].x;
		cin.ignore();
		cout<<"Nhap toa do y = ";
		cin>>arrDiem[i].y;
		cin.ignore();
	}
}

void xuatToaDo(diem arrDiem[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"("<<arrDiem[i].x<<","<<arrDiem[i].y<<") "<<endl;
	}
}

