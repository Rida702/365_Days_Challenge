#include<iostream>
using namespace std;

int main(){
	int s, t;
	cin>>s;
	cin>>t;
	string str;
	cin>>str;
	while(t--){
		for(int i=1;i<str.length();i++){
			if(str.at(i-1)=='B' && str.at(i)=='G') {
			str.at(i-1)='G';
			str.at(i)='B';
			i= i + 1;	}
		}
	}
	cout << str << endl;
	return 0;
}
