#include<iostream>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, j=0;
		cin >> n;
		string str, s;
		cin >> str;
		char ch=str.at(0);
		for(int i=1; i<n; i++){
			if(ch==str.at(i)){
				s+=ch;
				if(i+1<n) {
					ch=str.at(i+1);
					i++;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}
