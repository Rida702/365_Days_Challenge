#include<iostream>
using namespace std;

int main(){
	int input, mod=0, n;
	cin >> input;
	if(input>=1001 && input<=9999) mod = input%1000;
	else if(input>=10001 && input<=99999) mod = input%10000;
	else mod = input%100000;
	n = ( input - mod )/1000;
	int dfactorial=1, i=n;
	while(i>1){
		dfactorial*=i;
		i-=2;
	}
	cout << dfactorial << endl;
	return 0;
}

//Double Factorial
//n = ( input - mod )/1000
//then take n!!
//if n=6
//n!! = 6*4*2 = 48
