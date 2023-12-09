#include<iostream>
using namespace std;

int main (){
	int x;
	for ( int i=0; i<5; i++){
		cout << "Enter Number: ";
		cin >> x;
		if ( x%2==0 )	cout << x << " is Even." << endl;
		else			cout << x << " is Odd" << endl;
	}
	return 0;
}

