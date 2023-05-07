#include<iostream>
using namespace std;

int main(){
	int n, crime=0,policeman=0,count=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(a!=-1)        policeman+=a;
		else if(a==-1) 	crime++;
		if(policeman==0 && a==-1 ) {
			count++;
		}
		else if(a==-1 && policeman!=0) {
			policeman--;
		}
	}
	cout << count << endl;
	return 0;
}
