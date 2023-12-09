#include<iostream>
using namespace std;

int main () {
	long long int n, k;
	cin >> n;
	cin >> k;
	long long int p;
	if(n%2!=0) p = (n/2)+1;
	else p = n/2;
	if(k<=p) cout << (k*2)-1;
	else {
		k-=p;
		cout << k*2 << endl;
	}
	return 0;
}
