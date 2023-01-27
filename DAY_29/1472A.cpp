#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for( int run=0; run<n; run++){
		int a,b,c,count=0;
		cin >> a;
		cin >> b;
		cin >> c;
		if ( c==1 || ( a==1 && b%2==0 && b>=c ) ) cout << "YES" << endl;
		else if ( a%2!=0 && b%2!=0 )	cout << "NO" << endl;
		else {
			while(true){
			if( a%2!=0 && b%2!=0 ) break;
			else if( a%2==0 && b%2==0) {
				a=a/2;
				b=b/2;
				count+=4;
			}
			else if( a%2==0 ) {
				count+=2;
				a=a/2;
			}
			else if( b%2==0 ) {
				count+=2;
				b=b/2;
			}
		}
		if(count>=c ) cout << "YES" << endl;
		else          cout << "NO" << endl;
		}
	}
	return 0;
}
