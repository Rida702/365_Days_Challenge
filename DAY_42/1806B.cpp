#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int size;
		cin >> size;
		int a[size];
		for(int i=0; i<size; i++) cin >> a[i];
		if(size%2==0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
