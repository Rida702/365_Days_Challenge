#include<iostream>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int m,n;
		cin >> n; cin >> m;
		if(n%m==0) cout << "YES\n";
		else	   cout << "NO\n";
	}
	return 0;
}
