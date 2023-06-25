#include<iostream>
using namespace std;
 
int main(){
	int test;
	cin >> test;
	while(test--){
	int n, k, q;
	cin >> n; cin >> k; cin >> q;
	int a[n], count=0,c=0,x=0;
	long long int sum=0;
	for(int i=0; i<n; i++ ) {
		cin >> a[i];
		if(a[i]<=q) {
			count++;
			c++;
		}
		else {
			if(count>=k) {
				x = count-k+1;
				sum += (x*(x+1))/2;
			}
			count=0;
		}
	}
	if(count!=0 && count>=k) {
		x = count-k+1;
		sum += (x*(x+1))/2;
	}
	if(c<k) {
		cout << 0 << endl;
	}
	else {
		cout << sum << endl;
	}
	}
	return 0;
}
