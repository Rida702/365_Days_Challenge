#include<iostream>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	long long int a[n];
	for(long long int i=0; i<n; i++) cin >> a[i];
	for (long long int i=0; i<n; i++) {
		int count = 0, flag=0;
		for (long long int j=1; j<=a[i]; j++){
			if(a[i]%j==0) count++;
			if(count>3) {
				flag=1;
				break;
			}
		}
		if(flag==1 || count<3 ) cout << "NO" << endl;
		else 		cout << "YES" << endl;
	}
	return 0;
}
