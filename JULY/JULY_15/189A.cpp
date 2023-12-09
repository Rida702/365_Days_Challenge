#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int n, a[3];
	cin >> n;
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	sort(a, a+3);
	int value=0, i=0, count=0;
	while(value<=n){
		value+=a[i];
		if( (n-value) == a[i+1] ) 	i++;
		count++;
	}
	cout << count << endl;	
	return 0;
}
