#include<iostream>
using namespace std;

int main (){
	int num=0;
	cin >> num;
	if(num%2==0 && (num>0 && num<=100))	cout << "YES";
	else			cout << "NO";
	return 0;
}
