#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	int M[n];
	
	int i=0;
	while(i<n)
	{
		cout<<"Nhap M["<<i<<"]=";
		cin>>M[i];
		if(i>0 && M[i]<=M[i-1])
		{
			cout<<"M["<<i<<"] phai lon hon M["<<i-1<<"]. Vui long nhap lai M["<<i<<"]\n";
			continue;
		}
			
		i++;
	}
	
	cout<<"Du lieu ban vua nhap: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	
	return 0;
}
