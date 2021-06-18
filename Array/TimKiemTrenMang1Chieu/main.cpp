#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu trong mang: ";
	cin>>n;
	int M[n];
	cout<<"Nhap cac gia tri cho phan tu: \n";
	
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
	
	cout<<"Mang sau khi nhap: \n";
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
	
	int k;
	cout<<"\nNhap k muon tim: ";
	cin>>k;
	bool kq=false;
	int dem=0;
	
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
		{
			kq=true;
			//break;
			dem++;
		}
	}
	
	if(kq==true)
	{
		cout<<"Phan tu "<<k<<" co trong mang, xuat hien "<<dem<<" lan";
	}
	else 
	{
		cout<<"Phan tu "<<k<<" khong co trong mang";
	}
	
	return 0;
}
