#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void play();
void loopPlay();

int main(int argc, char** argv) {
	srand(time(NULL));
	cout<<"GAME DOAN SO ^^ \n";
	loopPlay();
	return 0;
}

void play()
{
	int so_may=1+rand()%100;
	int so_lan_doan=0;
	int so_doan;
	
	do
	{
		cout<<"Moi ban doan so trong khoang [1-100] \n";
		cin>>so_doan;
		so_lan_doan++;
		cout<<"Ban doan lan thu "<<so_lan_doan<<endl;
		if(so_doan==so_may)
		{
			cout<<"Wow, ban doan chinh xac roi ne, dap an dung la: "<<so_may<<endl;
			break;
		}
		
		if(so_doan<so_may)
		{
			cout<<"Sai roi, dap an lon hon nhe!"<<endl;
		}
		else
		{
			cout<<"Sai roi, dap an nho hon nhe!"<<endl;
		}
		
		if(so_lan_doan==7)
		{
			cout<<"GAME OVER!\n";
			cout<<"So cua may la: "<<so_may<<endl;
			cout<<"Chuc ban may man lan sau :)) \n";
			break;
		}
			
	}
	while(true);
}

void loopPlay()
{
	while(true)
	{
		play();
		cout<<"Ban co muon choi tiep khong? (c/k) \n";
		char c;
		cin>>c;
		cout<<"\n---------------------------------------------- \n";
		
		if(c=='k')
			break;
	}
	
	cout<<"Cam on ban da choi game :D"<<endl;
}
