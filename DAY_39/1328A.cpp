#include<iostream>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int a,b;
		cin >> a; cin >> b;
		if(a%b==0)	cout << a%b << endl;
		else if(a<b) cout << b-a << endl;
		else cout << (((a/b)*b)+b)-a << endl;
	}
	return 0;
}
