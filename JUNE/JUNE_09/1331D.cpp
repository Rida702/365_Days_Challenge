#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	cin >> str;
	int a = static_cast<int>(str.at(str.length()-1));
	if(a%2==0)  cout << 0 << endl;
	else 		cout << 1 << endl;
	return 0;
}
