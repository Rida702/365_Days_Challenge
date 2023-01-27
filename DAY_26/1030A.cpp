#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n], flag=0;
	for( int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i]==1) {
			flag=1;
			break;
		}
	}
	if(flag==1) cout << "HARD" << endl;
	else		cout << "EASY" << endl;
	return 0;
}
