#include<iostream>
#include<cstring>
using namespace std;

int main (){
	int n, flag;
	cin >> n;
	string str[n];
	int a[n];
	for(int i=0; i<n; i++) a[i]=0;
	for( int i=0; i<n; i++) {
		cin >> str[i];
		if(i==0){
			cout << "OK" << endl;
			//a[i]++;
		}
		else{
		    flag=0;
			for(int j=0; j<i; j++){
				if(str[j]==str[i]) {
				    a[j]+=1;
					string s = to_string(a[j]);
					str[i].append(s);
					cout << str[i] << endl;
					flag=1;
					break;
				}
			}
			if(flag==0) cout << "OK" << endl;
		}
	}
	return 0;
}
