#include<iostream>
using namespace std;

int main(){
	string num1, num2;
	cin >> num1;
	cin >> num2;
	for( int i=0; i<num1.length(); i++){
		if(num1.at(i)!=num2.at(i)) num1.at(i)='1';
		else					   num1.at(i)='0';
	}
	cout << num1 << endl;
	return 0;
}
