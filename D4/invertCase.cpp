#include<iostream>
using namespace std;

int main(){
	//Enter a Alphabet Upper or lower Case
	//This Program will revert the case of your character
	char ch;
	cin >> ch;
	if ( ch>='A' && ch<='Z' ) 	ch+=32;
	else						ch-=32;
	cout << ch << endl;
	return 0;
}
