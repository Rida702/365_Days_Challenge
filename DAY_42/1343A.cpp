#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, a, x;
		cin >> n;
		for( int i=2; i<50; i++){
			a = pow(2,i) - 1;
			if(n%a) continue;
			x = n/a;
			break;	
		}
		cout << x << endl;
	}
	return 0;
}
