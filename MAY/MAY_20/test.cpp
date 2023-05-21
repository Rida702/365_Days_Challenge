#include<iostream>
using namespace std;

int main(){
	int n = 187;
	int x = 10;
	int y = 5;
	cout << n%x << endl;
	if(n%x<y) n-=(x-1);
	else if (n%x>y) n-=( (n%x)-y );
	cout << n << endl;
	cout << 1%5 << endl;
	return 0;
}
