#include<iostream>
using namespace std;

int main (){
	int n=4;
	int arr[4][4]={{3,7,9,5},{4,5,6,9},{5,3,8,1},{6,5,3,2}};
	int actual[n][2];
	
	for( int i=0; i<n; i++)
		for( int j=0; j<2; j++)
			actual[i][j] = 0;
			
	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			if ( actual[i][0]<arr[i][j])
				actual[i][0] = arr[i][j];
		}
	}

	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			if ( actual[i][1] < actual[i][0] && actual[i][1]<arr[i][j] )
				actual[i][1] = arr[i][j];
		}
	}
				
	cout << "\n-----\n";
	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << "\n-----\n";
	for( int i=0; i<n; i++){
		for( int j=0; j<2; j++){
			cout << actual[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
