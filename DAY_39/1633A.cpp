#include<iostream>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n;	cin>>n;
		if(n%7==0) cout << n << endl;
		else cout << ((n/7)*7) << endl;
	}
	return 0;
}
