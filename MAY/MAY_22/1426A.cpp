#include<iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, x, apartment=2, floor=1;
		cin >> n;	cin >> x;
		while(apartment<n){
			apartment+=x;
			floor+=1;
		}
		cout << floor << endl;
	}
	return 0;
}
