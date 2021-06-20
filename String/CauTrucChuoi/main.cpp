#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char *str="Hello"; // Khai bao thong qua con tro
	cout<<str<<endl;
	
	char str2[]="World"; // Khai bao thong qua mang
	cout<<str2<<endl;
	
	char str3[]={'H','I','\0'}; // Khai bao thong qua mang
	cout<<str3<<endl;
	
	char str4[10]; // Khai bao thong qua mang
	str4[0]='T';
	cout<<str4<<endl;
	
	return 0;
}
