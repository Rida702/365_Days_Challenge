#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		string str;
		cin >> str;
		int flag=1;
		for( int i=1; i<str.length()/2; i++){
			if(str.at(i)==str.at(0)) continue;
			else flag=0;
		}
		if(flag==0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
