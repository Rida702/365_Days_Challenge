#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n], num=2, sum_even=0, sum_odd=0;
		for(int i=0; i<n/2; i++){
			a[i] = num;
			num+=2;
			sum_even+=a[i];
		}
		int j=0;
		for(int i=n/2; i<n; i++){
			if( i==n-1 && (sum_even-sum_odd)%2!=0 ) a[i] = sum_even-sum_odd;
			else if(i<n-1) {
				a[i] = a[j]-1; 
				j++;
			}
			else break; 
			sum_odd+=a[i]; 
		}
		if(sum_even==sum_odd) {
		cout << "YES" << endl;
		for( int i=0; i<n; i++) 
			cout << a[i] << " ";
		cout << endl;
		}
		else cout << "NO" << endl;
		
	}
	return 0;
}
