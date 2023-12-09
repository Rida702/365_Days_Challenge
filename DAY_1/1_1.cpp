#include<iostream>
using namespace std;
 
int main (){
	int num;
	float num1;
	cin >> num;
	num1 = num/2.00;
	num = num/2;
	if(num1==num && num%2==0)	cout << "YES\n";
	else			cout << "NO\n";
}
