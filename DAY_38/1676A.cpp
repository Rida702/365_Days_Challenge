#include<iostream>
using namespace std;

int main(){
	int n; cin>>n;
	while(n--){
		int a=0, b=0, c=0;
			cin >> a;
		b= (a%10) + ((a%100)/10) + ((a%1000)/100);
		c= ((a%10000)/1000) + ((a%100000)/10000) + ((a%1000000)/100000);
		if(b==c) cout << "YES\n";
		else	 cout << "NO\n";
	}
	return 0;
}
