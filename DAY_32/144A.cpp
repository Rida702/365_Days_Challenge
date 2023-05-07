#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n], max=0, max_index, min=9999, min_index;
	for( int i=0; i<n; i++){
		cin >> arr[i];
		if( arr[i]>max ) {
			max = arr[i];
			max_index = i;
		}
		if( arr[i]<=min ) {
			min = arr[i];
			min_index = i;
		}
	}
	if( max_index == n-1 && min_index==0 && max_index==1 ) cout << 1 << endl;
	else if( max_index==0 && min_index==n-1 ) cout << 0 << endl;
	else if( max_index==0 ) cout << n-min_index-1 << endl;
	else if( min_index==n-1 ) cout << max_index << endl;
	else if	((max_index>= n/2 && min_index<=n/2) || (max_index>n/2 && min_index>n/2) || (max_index<n/2 && min_index<n/2) )	{
		cout << max_index + (n-min_index)-2;
	}
	else {
		cout << (max_index-1) + (n-min_index);
	}										
	return 0;
}

