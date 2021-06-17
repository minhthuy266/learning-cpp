#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char kt, ktkt;
	cout<<"Nhap vao mot ky tu bat ky: ";
	cin>>kt;
	
	int ascii, asciikt;
	
	ascii=kt;
	asciikt=ascii+1;
	ktkt=asciikt;
	
	cout<<"Ma ASCII cua "<< kt <<" la: "<< ascii<<endl;
	cout<<"Ky tu ke tiep cua "<< kt <<" la: "<<ktkt<<endl;
	
	return 0;
}
