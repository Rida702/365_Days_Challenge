#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m, sum1=0, sum2=0;
		cin >> n;
		cin >> m;
		if(n==1) cout << 0 << endl;
		else{
			int a = n/2;
			int b = m/a; 
			sum1 = (a-1)*b;
			sum2 = m-sum1;
			if( n==2 ) cout << sum1+sum2 << endl;
			else 	    		   cout << (2*sum1)+(2*sum2) << endl;
		}
	}
	return 0;
}
