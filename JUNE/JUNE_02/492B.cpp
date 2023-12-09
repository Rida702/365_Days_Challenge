#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, l;
	cin >> n; cin >> l;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	float max=0;
	if(a[0]!=0) max=a[0];
	for(int i=1; i<n; i++){
		if( (a[i]-a[i-1])/2.0 > max ) max= (a[i]-a[i-1]) /2.0;
	}
	cout << max << endl;
	return 0;
}
