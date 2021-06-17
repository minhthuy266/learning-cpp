#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int thang,nam;
	
	cout<<"Nhap so nam: ";
	cin>>nam;
	
	cout<<"Nhap so thang trong nam: ";
	cin>>thang;
	
	if(thang>12 || thang<1)
	
	{
		cout<<"So thang khong hop le, vui long nhap lai. ";
	}
	
	else if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12)
	{
		cout<<"Thang "<<thang<<" nam "<<nam<<" co 31 ngay";
	}
	else if (thang==4 || thang==6 || thang==9 || thang==11)
	{
		cout<<"Thang "<<thang<<" nam "<<nam<<" co 30 ngay";
	} 

	
	
	else 
	{
		if((nam%4==0 && nam%100!=0) || nam%400==0) 
		{
			cout<<"Thang "<<thang<<" nam "<<nam<<" co 28 ngay";
		}
		else 
		{
			cout<<"Thang "<<thang<<" nam "<<nam<<" co 29 ngay";	
		}
	}

	return 0;
}
