#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a, a1[n];
	for(int i=1; i<=n; i++){
		cin >> a;
		a1[a-1]=i;
	}
	for(int i=0; i<n; i++)
		cout << a1[i] << " ";
	cout << endl;
	return 0;
}
