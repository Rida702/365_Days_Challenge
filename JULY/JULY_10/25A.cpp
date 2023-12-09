#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int a[n], even, odd, evencount=0, oddcount=0;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if( a[i]%2==0 ) {
			evencount++;
			even = i+1;
		}
		else {
			oddcount++;
			odd = i+1;
		}
	}
	if(evencount==1) cout << even << endl;
	else cout << odd << endl;
	return 0;
}
