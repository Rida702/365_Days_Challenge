#include<iostream>
using namespace std;

int main () {
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n], index=0;
		for( int i=0; i<n; i++ )
			cin >> a[i];
		for( int i=0; i<n; i++ ){
			if(i==0 || i==1 ) continue;
			else if( a[i]!=a[i-1] && a[i-1]==a[i-2] ) {
				index = i;
				break;
			}
			else if( a[i]!=a[i-1] && a[i]==a[i-2] ) {
				index = i-1;
				break;
			}
			else if ( a[i]!=a[i-2] && a[i]==a[i-1] ){
				index = i-2;
				break;
			}
			else continue;
		}
		cout << index+1 << endl;
	}
	return 0;
}
