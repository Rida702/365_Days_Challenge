#include<iostream>
using namespace std;

int main ()	{
	int test;
	cin >> test;
	while(test--){
		int a,b,c,d,count=0;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		if(b>a) count++;
		if(c>a) count++;
		if(d>a) count++;
		cout << count << endl;
	}
	return 0;
}
