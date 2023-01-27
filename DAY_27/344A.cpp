#include<iostream>
using namespace std;

int main(){
	int n, count=0;
	cin >> n;
	int arr[n];
	for( int i=0; i<n; i++ ){
		cin >> arr[i];
		if( i>0 && arr[i]!=arr[i-1] ) count++;
	}
	cout << count+1 << endl;
	return 0;
}
