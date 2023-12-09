#include<iostream>
using namespace std;

int main(){
int t;
cin >> t;
for( int run=0; run<t; run++ ){
	int n;
	cin >> n;
	int arr[n], temp=0;
	for( int i=0; i<n; i++ )
		cin >> arr[i];
	for( int i=0; i<n; i++ ){
		for( int j=i+1; j<n; j++){
			if(arr[j]%2!=0) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp; 
				break;	}
		}
	}
	for( int i=0; i<n; i++ )
		cout << arr[i] << " ";
	cout << endl;
}
	return 0;
}
