#include<iostream>
using namespace std;

int sum1( int start, int end, int *arr ){
	int s=0;
	for( int i=start; i<=end; i++) s+=arr[i];
	return s;
}

int main(){
		int arr[10] = {1,1,1,1,1,1,1,1,1,1};
		int l,r,k;
		cin >> l;
		cin >> r;
		cin >> k;
		cout << sum1(0,l-2,arr) << endl;
		cout << sum1(r,10-1,arr) << endl;
		cout << ((r-l)+1)*k << endl;
			int n1 = sum1(0,l-2,arr);
			int n2 = sum1(r,10-1,arr);
			int n3 = ((r-l)+1)*k;
			cout <<  n1+n2+n3  << endl;
			if((n1+n2+n3)%2==0) cout << "NO" << endl;
			else cout << "YES" << endl;
	return 0;
}
