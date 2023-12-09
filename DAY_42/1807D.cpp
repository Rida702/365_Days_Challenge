#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n;
		cin >> q;
		int arr[n],total=0;
		for(int i=0;i<n;i++)	{
			cin >> arr[i];
			total+=arr[i];
		}
		while(q--){
			int l,r,k,sum=0, range_sum=0;
			cin >> l;
			cin >> r;
			cin >> k;
			for( int i=l-1; i<r; i++) range_sum+=arr[i];
			sum = total + range_sum + ((r-l)+1)*k;
			if(sum%2==0) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}
	return 0;
}
