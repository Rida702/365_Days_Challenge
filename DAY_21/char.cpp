#include<iostream>
using namespace std;

int main(){
	char ch[3];
	for( int i=0; i<3; i++)
		cin >> ch[i];
	int a1,a2;
	a1 = (ch[0]*10)+ch[1]-(11*48);
	a2 = ((ch[0]-48)*100) + ((ch[1]-48)*10) + (ch[2]-48);
	cout << a1 << endl;
	cout << a2 << endl;
	return 0;
}
