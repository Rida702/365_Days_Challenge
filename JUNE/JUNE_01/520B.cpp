#include<iostream>
using namespace std;

int main (){
	int n, m;
	cin >> m; cin >> n;
	if(m>=n) cout << m-n << endl;
	else {
		int count=0;
		if(n%2==0){
			int value=n;
			while(value%2==0){
				value = value/2;
				count++;
				cout << "Count 1: " << count << endl;
			}
			if(value<m) {
				while(value!=m) {
					value++;
					count++;
					cout << "Count 2: " << count << endl;
				}
			}
			else if (value>m){
				while(m!=value){
					if(value%2!=0) value = value+1;
					else value = value/2; 
					count++;
					cout << "Count 3: " << count << endl;
				}
			}
		}
		else {
			int value=m;
			while(value<n){
				value*=2;
				count++;
			}
			while(value!=n){
				value--;
				count++;
			}
			cout << "Count 4: " << count << endl;
		}
		cout << count << endl;
	}
	return 0;
}
