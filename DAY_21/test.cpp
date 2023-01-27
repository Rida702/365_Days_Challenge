//decode string
#include<iostream>
using namespace std;

int main(){
	int n, t;
	cin >> t;
	for( int run=0; run<t; run++){
	cin >> n;
	char ch[n], str[n];
	for( int i=0; i<n; i++)
		cin >> ch[i];
	int k=0, index;
	for( int j=0; j<n; j++){
		index=0;
		if ( j==n-1 || ch[j+2]!='0' || ( ch[j+2]=='0' && ch[j+3]=='0') ){
			index = ch[j]-48;
			cout << "index1: " << index << endl;
			char ch = index+96;
			str[k++]=ch;
		}	
		else {
			index = ((ch[j]-48)*10)+(ch[j+1]-48);
			cout << "index2: " << index << endl;
			char ch = index+96;
			str[k++]=ch;
			j+=2;	}
	}
	for ( int i=0; i<k; i++)
		cout << str[i];
	cout << endl;
	}
	return 0;
}
