#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ham1(int x);
void ham2(int &x);

int main(int argc, char** argv) {
	int x=5;
	cout<<"x truoc khi vao ham1= "<<x<<endl;
	ham1(x);
	cout<<"\nx sau khi vao ham1= "<<x<<endl;
	
	cout<<"---------------------------------------"<<endl;
	
	x=5;
	cout<<"x truoc khi vao ham2= "<<x<<endl;
	ham2(x);
	cout<<"\nx sau khi vao ham2= "<<x<<endl;
	
	return 0;
}

void ham1(int x)
{
	x=10;
	cout<<"x trong ham 1= "<<x;
}

void ham2(int &x)
{
	x=10;
	cout<<"x trong ham 2= "<<x;
}
