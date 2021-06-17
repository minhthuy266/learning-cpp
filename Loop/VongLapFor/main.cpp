#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,n,sum;
	cout<<"Nhap n: ";
	cin>>n;
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	
	cout<<"Sum = "<<sum;
	return 0;
}

/*
1.C/C++ cho phep Exp1 la mot dinh nghia bien
	for(int i=1;i<=n;++i)
2. Bat ky bieu thuc nao trong 3 bieu thuc cua vong lap for deu co the rong
	for(;i!=0;) statement;
3. Xoa tat ca cac bieu thuc trong vong lap for se cho mot vong lap vo tan
	for(;;;) statement;
*/
