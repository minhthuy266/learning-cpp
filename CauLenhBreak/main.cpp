#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
1. Lenh break dung de thoat khoi mot cau truc dieu khien ma khong cho den bieu thuc dieu kien duoc dinh tri
2. Khi break duoc thuc hien ben trong mot cau truc lap, dieu khien (control flow) tu dong nhay den lenh dau tien ngay sau cau truc lap do
3. K su dung lenh break ben ngoai cac cau truc lap while, do while, for
*/


int main(int argc, char** argv) {
	int sum=0;
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		if(sum>=9)
		break;
	}
	
	cout<<"Tong la: "<<sum;
	return 0;
}
