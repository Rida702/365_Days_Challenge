#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for( int run=0; run<t; run++){
	int a,b,c,n, count=0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> n;
	if( a>b && a>c ){
		count=(a-b)+(a-c);
		n-=count;
	}
	else if( b>a && b>c ){
		count=(b-a)+(b-c);
		n-=count;
	}
	else if( c>b && c>a ){
		count=(c-a)+(c-b);
		n-=count;
	}
	else if( a==b && a>c ){
		count=a-c;
		n-=count;
	}
	else if( a==c && a>b ){
		count=a-b;
		n-=count;
	}
	else if( c==b && c>a ){
		count=c-a;
		n-=count;
	}
	if(n%3==0 && n>=0 ) cout << "YES\n";
	else	   cout << "NO\n";
	}
	return 0;
}
