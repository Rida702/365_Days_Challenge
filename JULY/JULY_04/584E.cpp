#include<iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v1;
int swap_count =0;

long long int find_cost ( int *a1, int *a2, int n , int i){
	int cost,j;
		if(i==0) j=i;
		else j=0;
		while(true){
			if(a1[i]==a2[j]) {
				swap(a1[i],a1[j]);
				cost = abs(i-j); 
				v1.push_back(a1[i]);
				v1.push_back(a1[j]);
				swap_count++;
				break;
			}
			else  
				j++;
		}
		return cost;
}

int main (){
	int n;
	cin >> n;
	int a1[n], a2[n];
	for(int i=0; i<n; i++) cin >> a1[i];
	for(int i=0; i<n; i++) cin >> a2[i];
	
	long long int  min = n*n, cost=0;
	int total_count=0;
	int i=0;
	while(i<n){
		if (a1[i]==a2[i]) i++;
		else {
		cost += find_cost(a1,a2,n,i);
		}
	}
	total_count = swap_count;
	cout << cost << endl;
	cout << total_count << endl;
	int k=0;
	for( int i=0; i<total_count*2; i++){
		if(k%2!=0) cout << v1[k] << endl;
		else cout << v1[k] << " "; 
		k++;
	}
	
	return 0;
}
