#include<iostream>
using namespace std;

int main (){
	int test=0;
	cin >> test;
	while(test--){
		int countA=0, countB=0, countC=0;
		string str;
		cin >> str;
		for( int i=0; i<str.length(); i++ ){
			if(str.at(i)=='A') countA++;
			else if(str.at(i)=='B') countB++;
			else 			   countC++;
		}
		if( ( ( countA!=0 && countC!=0 && (countA+countC)==countB )  
			|| ( countC==0 && countA==countB )
			|| ( countA==0 && countC==countB ) )
			&&  str.length()%2==0)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
