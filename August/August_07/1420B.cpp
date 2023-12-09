#include<iostream>
using namespace std;

int main (){
	long long int test;
	cin >> test;
	while(test--){
		long long int n;
		cin >> n;
		long long int a[n];
		for(long long int i=0; i<n; i++) cin >> a[i];
		long long int count = 0;
		for(long long int i=0; i<n-1; i++) {
			for(long long int j=i+1; j<n; j++){
				if( (a[i] & a[j]) >= (a[i] ^ a[j]) ) count++;	
			}
		}
		cout << count << endl;
	}
	return 0;
}
