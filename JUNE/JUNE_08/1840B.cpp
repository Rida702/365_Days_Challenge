#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, k, max, j=0, count=0;
		cin >> n; cin >> k;
		if(n>k) max =n;
		else	max =k; 
		while(pow(2,j)<max){
			count++;
			j++;
		}
		cout << count << endl;
	}
	return 0;
}
