#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int a[5]={5,4,3,2,1};
	int n = sizeof(a) / sizeof(a[0]);
	sort(a,a+n);
	for(int i=0;i<5;i++) cout << a[i] << endl;
	return 0;
}
