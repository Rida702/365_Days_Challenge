#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int a[n], max=0, count = 0;
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=1; i<n; i++){
		if(a[i]>=a[i-1]) count++;
		else  count = 0;
		if(max<count) max = count;
	}
	cout << max+1 << endl;
	return 0;
}
