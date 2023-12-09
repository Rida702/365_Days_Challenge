#include<iostream>
using namespace std;

bool isDistinct ( int s){
	if( (s/1000)==(s/100) || (s/1000)==(s/10) || (s/1000)==(s%10) || s.at(1)==s.at(2) || s.at(1)==s.at(3) || s.at(2)==s.at(3) ) 
		return false;
	else return true;
}

int main(){
	int year;
	cin >> year;
	while(true){
		if(isDistinct(++year))	return false;
	}
		cout << year << endl;
	}	
	return 0;
}
