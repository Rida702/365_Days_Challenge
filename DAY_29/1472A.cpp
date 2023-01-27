#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for( int run=0; run<n; run++){
		int a,b,c,count=1;
		cin >> a;
		cin >> b;
		cin >> c;
		if ( c==1 ) cout << "YES" << endl;
		else {
		while(a%2==0){
			count*=2;
			a/=2;
		}
		while(b%2==0){
			count*=2;
			b/=2;
		} 
		if(count>=c) cout << "YES" << endl;
		else cout << "NO" << endl;
		}
	}
	return 0;
}
