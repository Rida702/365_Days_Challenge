#include<iostream>
#include<cmath>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int sum;
		cin >> sum;
		int number = sqrt(sum);
		while (number*number<sum) {	++number;	}
		cout << number << endl;
	}
	return 0;
}
