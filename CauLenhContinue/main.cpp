#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
1. Continue dung de ket thuc lan lap hien tai va bat dau lan lap tiep theo
2. Dung trong than cac cau truc lap nhu for, while, do...while
3. Thuong di kem voi cau lenh if
*/

int main(int argc, char** argv) {
	int i=0,n=5;
	int sum=0;
	do
	{
		i++;
		if(i==2 || i==4)
		continue;
		sum=sum+i;
	}
	
	while(i<n);
	cout<<"Sum  = "<<sum;
	return 0;
}
