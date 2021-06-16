#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=5,y=3;
	int z=x-- - --y+2;
	cout<<"Gia tri cua x la: "<<x<<"\n"; //4
	cout<<"Gia tri cua y la: "<<y<<"\n"; //4
	cout<<"Gia tri cua z la: "<<z<<"\n"; //5
	return 0;
}
