#include<iostream>
#include<cstring>
#include<cstdio>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;
ifstream fin("chart.json");
ofstream fout;
fout.open("test.txt");
void welcome_studio(){
	cout<<"-----------------------------------------------------";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                      made by                       |";
	cout<<endl;
	cout<<"|                    kirin studio                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                    made with C++                   |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"-----------------------------------------------------";
	cout<<endl;
	Sleep(3000);
	system("cls");
} 
void start(){
	char i;
	cout<<"-----------------------------------------------------";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|            ==                       ==             |";
	cout<<endl;
	cout<<"|            D    O    S    I     C    G             |";
	cout<<endl;
	cout<<"|                        __                          |";
	cout<<endl;
	cout<<"|                       |__|                         |";
	cout<<endl;
	cout<<"|                       >|<                          |";
	cout<<endl;
	cout<<"|                        $                           |";
	cout<<endl;
	cout<<"|             Press the space to play                |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"|                                                    |";
	cout<<endl;
	cout<<"-----------------------------------------------------";
	cout<<endl;
	bool flag=false;
	while(true){
		i = getch();
		if(i == 32){
		system("cls");
		break;
		}
		
	}
}
int x[1000000];
int play(){
	for(int i=0;i<=1000;i++){
		fin>>x[i];
	}
	for(int i=0;i<=1000;i++){
		fout<<x[i];
	}
	return 0;
}
int main(){
	welcome_studio();
	start();
	play();
	return 0;
}
