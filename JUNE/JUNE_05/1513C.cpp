#include<iostream>
#include<string>
using namespace std;
 
int main(){
    int test;
    cin >> test;
    while (test--){
	int num, n;
	cin >> num; cin >> n;
	string str = to_string(num), s;
	for(int i=0; i<str.length(); i++){
		int a = int(str.at(i));
		a+=n;
		s+=(to_string(a-48));
	}
	cout << s.length() << endl;
    }
	return 0;
}
