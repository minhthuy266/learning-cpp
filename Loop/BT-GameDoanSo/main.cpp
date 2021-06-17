#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	while(true)
	{
		int so_may=1+rand()%100;
	cout<<"GAME DOAN SO\n";
	cout<<"May da doan so [1-100], moi ban doan!\n";
	int so_lan_doan=0;
	bool iswin=false;
	
	do
	{
		int so_doan;
		cin>>so_doan;
		so_lan_doan++;
		
		cout<<"Ban doan lan thu "<<so_lan_doan<<endl;
		
		if(so_doan==so_may)
		{
			cout<<"Haha, ban doan dung roi ne, dap an la: "<<so_may<<endl;
			iswin=true;
			break; // Thang va ngung vong lap
		}
		else if(so_doan>so_may)
		{
			cout<<"Ban doan sai roi, dap an nho hon nhe!"<<endl;
		}
		else
		{
			cout<<"Ban doan sai roi, dap an lon hon nhe!"<<endl;
		}
		
		if(so_lan_doan==7)
		break;
			
	}
	while(true);
	
	if(iswin!=true)
	{
		cout<<"GAME OVER! \n";
		cout<<"Dap an chinh xac la: "<<so_may<<endl;
	}
	
	cout<<"Ban co muon tiep tuc khong? (c/k): ";
	char c;
	cin>>c;
	if(c=='k')
		break;
	}
	
	cout<<"GOOD BYE!";
	
	return 0;
}
