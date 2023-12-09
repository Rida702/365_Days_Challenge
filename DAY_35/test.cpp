#include<iostream>
using namespace std;

int frequency ( string s1, string s2[], string s3[], int s ){
	int count=0;
	for( int i=0; i<s; i++ ){
		if( s1==s2[i] ) count++;
		if( s1==s3[i] ) count++;
	}
	if( count>=2 ) 		return 0;
	else if(count==0 )  return 3;
	else 				return count;
}

int player (string s1[], string s2[],string s3[], int s) {
	int count=0;
	for( int i=0; i<s; i++){
		count+= frequency(s1[i],s2,s3,s);
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	int n;
	for( int run=0; run<t; run++){
		cin >> n;	
		string str1[n],str2[n],str3[n];
	for( int i=0; i<n; i++)
		cin >> str1[i];
	for( int i=0; i<n; i++)
		cin >> str2[i];
	for( int i=0; i<n; i++)
		cin >> str3[i];
	cout << player(str1,str2,str3,n) << " " << player(str2,str1,str3,n) << " " << player(str3,str1,str2,n) << endl;
}
	return 0;
}
