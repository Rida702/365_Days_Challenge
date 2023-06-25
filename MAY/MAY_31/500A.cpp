#include<iostream>
using namespace std;

int main(){
	int n, dest;
	cin >> n; cin >> dest;
	int arr[n-1];
	for( int i=0; i<n-1; i++) cin >> arr[i];
	int x=0, flag=1, value;
	while(true){
		if(x+1==dest) break;
		else if ( x+1>dest ) {
			flag=0;
			break;
		}
		else {
			value=arr[x];
			x+=value;
		}
	}
	if(flag==1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
