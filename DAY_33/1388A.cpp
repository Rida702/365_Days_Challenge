#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int run=0; run<t; run++){
		int num, sum=6+10+14;
		cin >> num;
		if( num<=sum ) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			if(num==36) 	 cout << "6 15 14 1"<< endl;
			else if(num==40) cout << "10 15 14 1"<< endl;
			else if(num==44) cout << "14 15 10 5"<< endl;
			else cout << "6 10 14 " << num-sum << endl;
		}
	}
	return 0;
}
