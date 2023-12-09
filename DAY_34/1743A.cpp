#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int run=0; run<t; run++){
		int n;
		cin >> n;
		int arr[n];
		for( int i=0; i<n; i++)
			cin >> arr[i];
		cout << (10 - n) * (9 - n) * 3 << endl;
	}
	return 0;
}
