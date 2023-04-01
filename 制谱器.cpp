#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
using namespace std;
int main(){
	ofstream out ( "Beatmap.cbm" ) ;
	int c;
	string x; 
	if( ! out.is_open() ){
		cout << "Error opening file"; //读取错误 自动退出 
		out.close();
		return 0; 
	}
	int n;
	cout << "请输入note数量" << ":" ;
	cin >> n ;
	out << n << endl ;
	for ( int i = 0 ; i < n ; i + +){
		cout << "请输入每个note的类型，注意换行" << endl << ":" ; 
		cin >> x ;
		out << x << endl ;
	}
	for ( int i = 0 ; i < n ; i++ ){
		cout << "请输入note出现与结束时间，注意请先出现后结束，两note间使用enter换行输入" << endl << ":" ; 
		cin >> c ;
		out << c<< " " ;
		cin >> c ;
		out << c << endl ;
	}
	cout << "输入完毕，请前往存放此文件的文件夹查收,文件名为beatmap.cpm" << endl ;
	system ( "pause" ) ;
	return 0 ;
}
