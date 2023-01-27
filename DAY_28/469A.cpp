#include<iostream>
using namespace std;

bool search ( int A[], int size, int num){
	for(int i=0;i<size;i++)
		if(A[i]==num) return true;
	return false;
}

int main(){
	int n,size1,size2,count=0;
	cin >> n;
	cin >> size1;
	int a1[size1];
	for( int i=0; i<size1; i++)
		cin >> a1[i];
	cin >> size2;
	int a2[size2];
	for( int i=0; i<size2; i++)
		cin >> a2[i];
	for( int i=1; i<=n; i++)
		if( search(a1,size1,i ) || search(a2,size2,i) ) count++;
	if(count==n) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
	return 0;
}
