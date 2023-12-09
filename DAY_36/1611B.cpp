#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a,b;
		cin >> a; cin >> b;
		if( a>b && ((a+b)/4)>=b  ) 		cout << b << endl;
		else if( a<b && ((a+b)/4)>=a  ) cout << a << endl; 
		else 							cout << (a+b)/4 << endl;
	}
	return 0;
}
