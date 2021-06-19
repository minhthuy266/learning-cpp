#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[] = {0,1,2,3,4,5,6,7,8,9,10};
	int *p;
	p=a;
	
	for(int i=0;i<10;i++)
	{
		*(p+i) *=10;
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
	*(p+3)=10000;
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
	
	cout<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<"\t";
	}
	cout<<endl;
	
	return 0;
}
