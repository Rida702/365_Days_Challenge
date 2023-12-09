#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int size;
		cin >> size;
		int a[size];
		for(int i=0; i<size; i++) cin >> a[i];
		int n = sizeof(a) / sizeof(a[0]);
		sort(a,a+n);
		int num=0;
		for(int i=0; i<size; i++){
			if(num!=a[i]) break;
			else num++;
		}
		cout << num << endl;
	}
	return 0;
}
