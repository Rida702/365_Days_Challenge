#include<iostream>
using namespace std;

int main () {
	int n, k;
	cin >> n;
	cin >> k;
	int arr[n];
	int i=1, j=0;
	while(i<=n){
		arr[j++] = i;
		i+=2;
	}
	i=2;
	while(i<=n){
		arr[j++] = i;
		i+=2;
	}
	cout << endl;
	cout << arr[k-1] << endl;
	return 0;
}
