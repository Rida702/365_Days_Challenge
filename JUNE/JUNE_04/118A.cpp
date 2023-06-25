#include<iostream>
using namespace std;

int main (){
	string str;
	cin >> str;
	string s;
	for(int i=0;i<str.length(); i++){
		if(str.at(i)=='A' || str.at(i)=='a' ||
		   str.at(i)=='E' || str.at(i)=='e' ||
		   str.at(i)=='I' || str.at(i)=='i' ||
		   str.at(i)=='O' || str.at(i)=='o' ||
		   str.at(i)=='U' || str.at(i)=='u' ||
		   str.at(i)=='Y' || str.at(i)=='y' ) continue;
		   else {
		   	s+='.';
		   	if(str.at(i)>=65 && str.at(i)<=90) str.at(i)+=32;
		   	s+=str.at(i);
		   }
	}
	cout << s << endl;
	return 0;
}
