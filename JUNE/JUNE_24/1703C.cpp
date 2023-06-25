#include<iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		//no of wheels
		int n;
		cin >> n;
		//array to store end of cypher
		int a[n], b[n];
		for(int i=0; i<n; i++) cin >> a[i];
		
		//array to take string and value input
		for(int i=0; i<n; i++){
			int value;
			string str;
			cin >> value;
			cin >> str;
			for(int j=str.length()-1; j>=0; j--){
				//cout << "value1: " << a[i] << endl;
				if(str.at(j)=='D') {
					if(a[i]==9) a[i] = 0;
					else a[i]++;
					//cout << "value2: " << a[i] << endl;
				}
				else {
					if(a[i]==0) a[i] = 9;
					else a[i]--;
					//cout << "value3: " << a[i] << endl;
				}
			}
			b[i] = a[i];
		}
		for( int i=0; i<n; i++) 
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}
