#include<iostream>
using namespace std;

int main ()	{
	string s;
	cin >> s;
	if(s.at(0)>='a' && s.at(0)<='z') s.at(0)-=32; 
	for(int i=1; i<s.length(); i++){
		if(s.at(i)>='A' && s.at(i)<='Z') s.at(i)+=32;
	}
	cout << s << endl;
	return 0;
}
