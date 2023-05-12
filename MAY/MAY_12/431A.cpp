#include<iostream>
using namespace std;

int main(){
	int a1,a2,a3,a4;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	cin >> a4;
	string str;
	cin >> str;
	int count=0;
	for(int i=0; i<str.length(); i++){
		if(str.at(i)=='1') count+=a1;
		else if(str.at(i)=='2') count+=a2;
		else if(str.at(i)=='3') count+=a3;
		else count+=a4;
	}
	cout << count << endl;
	return 0;
}
