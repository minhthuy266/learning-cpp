#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int **p=new int*[5];
	for(int i=0;i<5;i++)
		{
			p[i]=new int[7]; // *(p+i)=new int[7]
		}
	
	for(int i=0;i<5;i++)
		{
			for(int j=0;j<7;j++)
				{
					p[i][j]=i+j; // *(*(p+i)+j)=i+j
				}
		}
	
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<7;j++)
				{
					cout<<*(*(p+i)+j)<<"\t";
				}
			cout<<"\n";
		}
	
	// Huy bo nho
		for(int i=0;i<5;i++)
		{
			delete *(p+i);
		}
		
		delete p;
	
	
	return 0;
}
