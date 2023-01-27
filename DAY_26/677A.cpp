#include<iostream>
using namespace std;

int main(){
	int n, l, count=0;
	cin >> n;
	cin >> l;
	int arr[n];
	for( int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i]>l) count+=2;
		else		 count+=1;
	}
	cout << count << endl;
	return 0;
}
