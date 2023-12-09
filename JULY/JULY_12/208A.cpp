#include<iostream>
using namespace std;

int main () {
	string str;
	cin >> str;
	string s;
	int count=0;
	for( int i=0; i<str.length(); ){
		if(i<str.length()-2 && str.at(i)=='W' && str.at(i+1)=='U' && str.at(i+2)=='B') {
			i+=3;
			if(count>0) {
				s+=" ";
				count=0;
			}
		}
		else {
			s+=str.at(i);
			i++;
			count++;
		}
	
	}
	cout << s << endl;
	return 0;
}
