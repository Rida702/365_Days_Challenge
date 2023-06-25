#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int i=n, sum=0, j=1;
	while(i--){
		sum += j*i;
		j++;
	}
	cout << sum+n << endl;
	return 0;
}
