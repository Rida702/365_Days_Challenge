#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int i=0; i<t; i++){
		int size;
		cin >> size;
		int arr[size];
		int sum=0;
		for( int j=0; j<size; j++){
			cin >> arr[j];
			sum+=arr[j];
		}
		if( (sum/size)*size==sum )cout << sum/size << endl;
		else					  cout << (sum/size)+1 << endl;
	}
	return 0;
}
//2 3 3 3 4 1 2 2 3 1 1 7
