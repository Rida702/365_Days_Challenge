#include<iostream>
#include <algorithm>
using namespace std;

int main (){
	int a,b,c;
	cin >> a; cin >>b; cin >>c;
	
	int a1 = a+b*c; 
	int a5 = a*b+c; 
	int a2 = a*(b+c);
	int a4 = (a+b)*c; 
	int a3 = a*b*c;
	int a6 = a+b+c;
	
	int arr[] = {a1, a2, a3, a4, a5, a6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* maxElement = max_element(arr, arr + size);
    cout << *maxElement << endl;
	return 0;
}
