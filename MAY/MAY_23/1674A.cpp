#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int x,y;
		cin >> x; cin >> y;
		if(x==y) cout << 1 << " " << 1 << endl;
		else if ( y%x!=0 ) cout << 0 << " " << 0 << endl;
		else {
			int a=0,b = y/x;
			while(x<y){
				x*=b;
				a++;
			}
			if( x==y ) cout << a << " " << b << endl;
			else 	   cout << 0 << " " << 0 << endl;
		}
	}
	return 0;
}
