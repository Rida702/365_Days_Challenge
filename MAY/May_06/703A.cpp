#include<iostream>
using namespace std;

int main(){
	int test, mishaka=0, chris=0;
	cin >> test;
	while(test--){
		int a1, a2;
		cin >> a1;
		cin >> a2;
		if(a1>a2) mishaka++;
		else if(a1<a2) chris++;
		else continue;
	}
	if(chris<mishaka) cout << "Mishka" << endl;
	else if(chris>mishaka) cout << "Chris" << endl;
	else cout << "Friendship is magic!^^" << endl;
	return 0;
}
