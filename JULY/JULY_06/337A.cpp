#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int n, m;
	cin >> n; cin >> m;
	int arr[m];
	for( int i=0; i<m; i++) cin >> arr[i];
	sort(arr,arr+m);
	int start = 0, last = n-1, min=2000;
	while(true){
		if(last==m) break;
		if( arr[last]-arr[start] < min ) min = arr[last]-arr[start];
		start++; last++;
	}
	cout << min << endl;
	return 0;
}
