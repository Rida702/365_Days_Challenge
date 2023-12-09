#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int a;
		cin >> a;
		int n1 = a%10, n2 = (a%100)/10, n3 = (a%1000)/100, n4 = (a%10000)/1000;
		if( n1==n2 && n2==n3 && n3==n4 ) cout << -1 << endl;
		else if( (n1==n2 && n2==n3 && n3!=n4) || (n1==n3 && n3==n4 && n1!=n2 ) ||
			( n1==n2 && n2==n4 && n1!=n3 ) || ( n1!=n2 && n2==n3 && n3==n4 ))	cout << 6 << endl;
		else cout << 4 << endl;
	}
	return 0;
}
