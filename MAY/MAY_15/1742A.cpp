#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		if( (a+b)==c || (a+c)==b || (b+c)==a ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;	
}
