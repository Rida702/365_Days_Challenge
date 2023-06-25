#include<iostream>
using namespace std;

int main(){
	int n, t;
	cin >> n; cin >> t;
	string s1, s2, s3;
	cin >> s1; cin >> s2;
	for(int i=0; i<n; i++){
		if(s1.at(i)==s2.at(i)) {
			char ch = s1.at(i) + 1;
			s3+=ch;
		}
		else if(i%2==0) s3+=s1.at(i);
		else 			s3+=s2.at(i);
	}
	if(s3==s1 || s3==s2) cout << -1 << endl;
	else cout << s3 << endl;
	return 0;
}
