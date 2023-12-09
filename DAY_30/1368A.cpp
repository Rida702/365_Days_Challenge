#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int run=0; run<t; run++){
	int a,b,n, count=0;
	cin >> a;
	cin >> b;
	cin >> n;
	while(a<=n && b<=n ){
		if( a>b ) b+=a;
		else	  a+=b;
		count++;
	}
	cout << count << endl;
	}
	return 0;
}
