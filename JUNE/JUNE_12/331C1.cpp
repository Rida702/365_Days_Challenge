#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
	int n, c=0;
	cin >> n;
	vector<int> v;
	string str;
	while(n!=0){
		str = to_string(n);
		for(char digit:str){
		int number = digit - '0';
		v.push_back(number);
	}
	auto maxElement = max_element(v.begin(), v.end());	
	n-=*maxElement;
	v.clear();
	c++;
	}	
	cout << c << endl;
	return 0;
}
