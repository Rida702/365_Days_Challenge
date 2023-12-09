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
			int a = n/2;  //non-zero values  of array
			int b = m/a; //value distributed in each array non-zero index
//			cout << "a: " << a << endl;
//			cout << "b: " << b << endl;
			sum1 = (a-1)*b;
			sum2 = m-sum1;
//			cout << "sum1: " << sum1 << endl;
//			cout << "sum2: " << sum2 << endl;
			if( n==2 ) cout << sum1+sum2 << endl;
			//else if( n%2==0)	   cout << (2*sum1)+sum2 << endl;
			else 	    		   cout << (2*sum1)+(2*sum2) << endl;
		}
	}
	return 0;
}
