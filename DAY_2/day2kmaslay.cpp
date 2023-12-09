#include<iostream>
using namespace std;

int main (){
	int n=4;
	int arr[4][4]={{3,7,9,5},{4,5,6,9},{5,3,8,1},{6,5,3,2}};
	int actual[n];
	int act1[n];
	
	for( int i=0; i<n; i++)
			actual[i] = 0;
			
	for( int i=0; i<n; i++)
			act1[i] = 0;
			
	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			if ( actual[i]<arr[i][j])
				actual[i] = arr[i][j];
		}
	}

	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			if ( arr[i][j] < actual[i] && act1[i]<arr[i][j] )
				act1[i] = arr[i][j];
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
	for( int i=0; i<n; i++)
			cout << actual[i] << " ";
			
	cout << "\n-----\n";
	for( int i=0; i<n; i++)
			cout << act1[i] << " ";
	
	return 0;
}
