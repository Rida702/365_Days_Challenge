#include<iostream>
using namespace std;

int sum1( int start, int end, int *arr ){
	int s=0;
	for( int i=start; i<=end; i++) s+=arr[i];
	return s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n;
		cin >> q;
		int arr[n];
		for(int i=0;i<n;i++)	cin >> arr[i];
		while(q--){
			int l,r,k,sum=0;
			cin >> l;
			cin >> r;
			cin >> k;
			sum = sum1(0,l-2,arr) + sum1(r,n-1,arr) + ((r-l)+1)*k;
			if(sum%2==0) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
