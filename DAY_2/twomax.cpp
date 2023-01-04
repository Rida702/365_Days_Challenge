#include<iostream>
using namespace std;

int main (){
	int arr[9]={1,2,3,4,5,6,17,8,19};
	int max=0, max1=0;
	for( int i=0; i<9; i++){
		if ( max<arr[i] )	max=arr[i];
	}
	for( int i=0; i<9; i++){
		//if( max1<arr[i] && arr[i]<max  )	max1 = arr[i];
		if( arr[i]<max && max1<arr[i]   )	max1 = arr[i];
	}
	cout << "Max is: " << max << endl;
	cout << "Max1 is: " << max1 << endl;
	return 0;
}
