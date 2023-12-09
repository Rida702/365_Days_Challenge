#include<iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	int arr[n][4];
	int finalist[n][2];
	for( int i=0; i<n; i++){
		for( int j=0; j<4; j++){
			cin >> arr[i][j];
		}
		cout << endl;
	}
	
	for( int i=0; i<n; i++){
		if ( arr[i][0]>arr[i][1] )	finalist[i][0] = arr[i][0];
		else						finalist[i][0] = arr[i][1];
		
		if ( arr[i][2]>arr[i][3] )	finalist[i][1] = arr[i][2];
		else						finalist[i][1] = arr[i][3];
		cout << endl;
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
			cout << finalist[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
