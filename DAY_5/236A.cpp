#include<iostream>
using namespace std;

int main(){
	int count=0;
	string str;
	cin >> str;
	for( int i=0; i<str.length(); i++){
		for( int j=0; j<str.length(); j++){
			if(i==j)	continue;
			else if(str.at(i)==str.at(j))	{
				count++;
				str.at(i)=-1;	}
		}
	}
	if((str.length()-count)%2==0)	cout << "CHAT WITH HER!" << endl;
	else							cout << "IGNORE HIM!" << endl;
	return 0;
}
//zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
