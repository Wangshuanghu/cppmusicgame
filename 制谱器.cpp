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
		cout << "Error opening file"; //��ȡ���� �Զ��˳� 
		out.close();
		return 0; 
	}
	int n;
	cout << "������note����" << ":" ;
	cin >> n ;
	out << n << endl ;
	for ( int i = 0 ; i < n ; i + +){
		cout << "������ÿ��note�����ͣ�ע�⻻��" << endl << ":" ; 
		cin >> x ;
		out << x << endl ;
	}
	for ( int i = 0 ; i < n ; i++ ){
		cout << "������note���������ʱ�䣬ע�����ȳ��ֺ��������note��ʹ��enter��������" << endl << ":" ; 
		cin >> c ;
		out << c<< " " ;
		cin >> c ;
		out << c << endl ;
	}
	cout << "������ϣ���ǰ����Ŵ��ļ����ļ��в���,�ļ���Ϊbeatmap.cpm" << endl ;
	system ( "pause" ) ;
	return 0 ;
}
