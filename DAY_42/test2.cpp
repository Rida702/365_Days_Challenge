#include<iostream>
using namespace std;

int main(){
	int arr[10] = {1,1,1,1,1,1,1,1,1,1};
	int l,r,k,sum=0, range_sum=0, total=10;
	cin >> l;
	cin >> r;
	cin >> k;
	for( int i=l-1; i<r; i++) range_sum+=arr[i];
	cout << total << endl;
	cout << range_sum << endl;
	cout << ((r-l)+1)*k << endl;
	sum = total + range_sum + ((r-l)+1)*k;
	if(sum%2==0) cout << "NO" << endl;
	else cout << "YES" << endl;
	return 0;
}
