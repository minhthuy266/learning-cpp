#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int sd=n%2;
	
	switch(sd)
	{
		case 0:
			cout<<n<<" la so chan.";
			break;
		case 1:
			cout<<n<<" la so le.";
			break;
		default:
			cout<<"Ban nhap sai gia tri.";
	}
	return 0;
}
