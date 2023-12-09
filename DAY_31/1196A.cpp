#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int run=0; run<t; run++ ){
		long long int a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		a+=b+=c;
		cout << a/2 << endl;
	}
	return 0;
}
