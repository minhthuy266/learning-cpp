#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nhapMang(int M[], int n);
void xuatMang(int M[], int n);
int timk(int M[], int n, int k);
void sapXepTangDan(int M[], int n);

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	int M[n];
	nhapMang(M,n);
	
	cout<<"Mang sau khi nhap: \n";
	xuatMang(M,n);
	
	int k;
	cout<<"\nNhap k de tim: ";
	cin>>k;
	int kqTim=timk(M,n,k);
	if(kqTim==-1)
		cout<<"Khong thay "<<k<<" trong mang\n";
	else 
		cout<<"Thay "<<k<<" tai vi tri thu "<<kqTim<<endl;
		
	sapXepTangDan(M,n);
	cout<<"\nMang sau khi sap xep la: \n";
	xuatMang(M,n);
	
	return 0;
}

void nhapMang(int M[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}

void xuatMang(int M[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<M[i]<<"\t";
	}
}

int timk(int M[], int n, int k)
{
	for(int i=0;i<n;i++)
	{
		if(M[i]==k)
			return i;
	}
	return -1;
}

void sapXepTangDan(int M[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			{
				if(M[i]>M[j])
					{
						int t=M[i];
						M[i]=M[j];
						M[j]=t;
					}
			}
	}
}
