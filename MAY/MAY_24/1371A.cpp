#include<iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int s;
		cin >> s;
		if(s%2==0) cout << s/2 << endl;
		else cout << (s/2)+1 << endl;
	}
	return 0;
}
