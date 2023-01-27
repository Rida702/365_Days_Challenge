#include<iostream>
using namespace std;

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	int k=str2.length()-1, flag=1;
	for(int i=0; i<str1.length(); i++, k--){
		if(str1.at(i)!=str2.at(k)) {
			flag=0;
			break;
		}
	}
	if(flag==1) cout << "YES\n";
	else		cout << "NO\n";
	return 0;
}
