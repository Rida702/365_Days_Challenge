//decode string
#include<iostream>
using namespace std;

int main(){
	int n, t;
	cin >> t;
	while(t--){
	cin >> n;
	char ch[n], str[n];
	for( int i=0; i<n; i++)
		cin >> ch[i];
	int k=0;
	for( int j=n-1; j>=0; j--){
		int index=0;
		if(ch[j]=='0'){
			index = ((ch[j-2]-48)*10)+(ch[j-1]-48);
			char ch = index+96;
			str[k++]=ch;
			j-=2;
		}
		else {
			index = ch[j]-48;
			char ch = index+96;
			str[k++]=ch;
		}
	}
	for ( int i=k-1; i>=0; i--)
		cout << str[i];
	cout << endl;
	}
	return 0;
}
