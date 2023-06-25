#include<iostream>
using namespace std;

int main (){
	int n, m;
	cin >> n; cin >> m;
	int count=n;
	int socks=n/m;
	if(n<m) cout << n << endl;
	else {
	while(socks>=m){
		count+=socks;
		socks = socks/m;
	}
	socks=count/m;
	if((socks+n)%m==0) cout << socks+n+1 << endl;
	else 			   cout << socks+n << endl;
	}
	return 0;
}

//10 5
