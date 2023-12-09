#include<iostream>
using namespace std;

int main(){
int a,b,c,d;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
if( a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ) cout << 0 << endl;
else if( a==b && b==c && c==d ) cout << 3 << endl;
else if ( (a==b && c==d ) || (a==c && b==d ) || (a==d && c==b ) || (a==b && b==c && c!=d) || (a==b && b==d && c!=d) || (a==d && d==c && c!=b) 
	|| (b==d && d==c && c!=a) )
	cout << 2 << endl;
else cout << 1 << endl;
	return 0;
}
