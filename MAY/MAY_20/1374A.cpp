#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int x,y,n;
		cin>>x; cin>>y; cin>>n;
		if(n<x) cout << y << endl;
		else {
			while(true){
				if(n%x<y) n-=(x-1);
				else if (n%x>y) n-=( (n%x)-y );
				else break;
			}
			cout << n << endl;
		}
	}
	return 0;
}
