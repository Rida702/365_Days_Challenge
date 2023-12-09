#include<iostream>
using namespace std;

int main (){
	int x;
	cin >> x;
	int a=1, i=0;
	while(a<x){
		a*=2;
		++i;
	}
	//cout << a << endl;
	if(x%2!=0) cout << i << endl;
	else {
		a/=2;
		cout << (x-a)+1 << endl;
	}
	return 0;
}
//536870911
//536870912
