#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int run=0; run<t; run++ ){
		int n,count=0;
		cin >> n;
		int arr[n];
	for( int i=0; i<n; i++)
		cin >> arr[i];
		
	for( int i=0; i<n-1; i++){
		for( int j=i+1; j<n; j++){
			if ( arr[i]==arr[j] ) count = i+1;	
		}
	}
	cout << count << endl;
}
	return 0;
}
