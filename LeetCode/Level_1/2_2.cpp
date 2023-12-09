#include<iostream>
#include<vector>
using namespace std;

int main (){
	vector <int> v1;
	for( int i=0; i<10; i++){
		v1.push_back(i+1);
	}
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	int k=0;
	for ( int i=v1.size()-1 ; i>=0; i--, k++)
		cout << v1.at(i) << " ";
	cout << endl;
	return 0;
}
