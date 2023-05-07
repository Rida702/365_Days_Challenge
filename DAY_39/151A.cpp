#include<iostream>
using namespace std;

int main(){
	int n, k, l, c, d, p, nl, np;
	cin >> n;
	cin >> k;
	cin >> l;
	cin >> c;
	cin >> d;
	cin >> p;
	cin >> nl;
	cin >> np;
	if ( (((k*l)/nl)/n) <= ((c*d)/n) && (((k*l)/nl)/n) <= ((p/np)/n) ) cout << (((k*l)/nl)/n) << endl;
	else if ( ((c*d)/n) <= (((k*l)/nl)/n) && ((c*d)/n) <= ((p/np)/n) ) cout << ((c*d)/n) << endl;
	else if ( ((p/np)/n) <= ((c*d)/n) && ((p/np)/n) <= (((k*l)/nl)/n) ) cout << ((p/np)/n) << endl;
	return 0;
}
