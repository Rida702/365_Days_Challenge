#include<iostream>
using namespace std;

int main (){
	string str;
	cin >> str;
	string s = "hello";
	int i=0, j=0;
	while(i!=str.length() && j!=s.length()){
		if(str.at(i)==s.at(j)) j++;
		i++;
	}
	if(j==s.length()) cout << "YES" << endl;
	else 			  cout << "NO" << endl;
	return 0;
}

