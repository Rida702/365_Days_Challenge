#include<iostream>
using namespace std;

int main(){
	int matches, count=0;
	cin >> matches;
	string str;
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if(str.at(i)=='A') count++;
		else if(str.at(i)=='D') count--;
	}
	if(count<0) 		cout << "Danik" << endl;
	else if( count>0)	cout << "Anton" << endl;
	else 				cout << "Friendship" << endl;
	return 0;
}
