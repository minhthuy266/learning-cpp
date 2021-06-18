#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ham(int x,int y=1)
{
	cout<<(x+y)<<endl;
}

int main(int argc, char** argv) {
	ham(9);
	ham(9,10);
	return 0;
}


