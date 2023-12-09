#include<iostream>
#include<vector>
using namespace std;

int main (){
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	int k=0;
	for( int i=0; i<4*2; i++){
		if(k%2!=0) cout << v1[k] << endl;
		else cout << v1[k] << " "; 
		k++;
	}
	return 0;
}
