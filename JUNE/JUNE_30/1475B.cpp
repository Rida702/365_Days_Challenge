#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		if( n<2020 && n<2021 ) {
			cout << "NO" << endl;
		}
		else {
			int a = n/2000;
			if(a*2021==n) {
				cout << "YES" << endl; 
				break;
			}
			else if(a*2020==n) {
				cout << "YES" << endl; 
				break;
			}
			else {
				int sum=2021;
				while(sum<n){
					sum+=2020;
				}
			if(sum==n) cout << "YES" << endl;
			else cout << "NO" << endl;
			//break;
			}
			//break;
		}
	}	
	return 0;
}
