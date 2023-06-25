#include<iostream>
using namespace std;

int main(){
	int n,q;
	cin>>n; cin>>q;
	int a[n],b[q],c[q];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<q;i++) cin>>b[i];
	
	for(int i=0; i<q; i++){
		int j=0;
		while(b[i]!=a[j]){
			j++;
		}
		c[i]=j+1;
		for(int k=j; k>0; k--){
			a[k]=a[k-1];
		}
		a[0]=b[i];
	}
	for(int i=0;i<q; i++) cout << c[i] << " ";
	cout << endl;
	return 0;
}
