#include <algorithm>
#include <iostream>
using namespace std;

int main (){
	int test;
	cin >> test;
	while(test--){
		int a[3];
		for(int i=0;i<3;i++)	cin >> a[i];
		sort(a,a+3);
		cout << a[1] << endl;
	}
	return 0;
}
