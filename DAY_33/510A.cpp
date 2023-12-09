#include<iostream>
using namespace std;

int main(){
	int n, m, flag=0;
	cin >> n;
	cin >> m;
	for(int i=0; i<n; i++){
		for( int j=0; j<m; j++){
			if(i%2==0) cout << "#";
			else if( flag==0 ) {
				if( j==m-1 ) {
					cout << "#";
					flag=1;
				}
				else 		 cout << ".";
			}
			else if( flag==1 ) {
				if( j==0 ) cout << "#";
				else 	   cout << ".";
				if ( j==m-1 ) flag=0;	
			}
		}
		cout  << endl;
	}
	return 0;
}
