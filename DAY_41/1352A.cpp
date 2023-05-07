#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		if( a>=1 && a<=9 ) cout << a << endl;
		else {
		int b = a, count = 1;
		while(b%10!=0){
			int c = 1;
			//cout << c << endl;
			cout << (b%10)*c << " ";
			b = b/10;
			c = c*10;
			count++;
		}
		cout << count << endl;
		cout << a << endl; 		}
	}
	return 0;
}
