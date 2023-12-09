#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
bool checkpivot(vector<int>& nums, int p ){
	int sum=0, sum1=0;
	for( int i =0; i<p; i++)
		sum+=nums.at(i);
	for( int i =nums.size()-1; i>p; i--)
		sum1+=nums.at(i);
	if( sum==sum1 )	return true;
	else			return false;
}
	
	
int pivotIndex(vector<int>& nums) {
	int flag=0, pivot=0;
	while( pivot<=nums.size()-1 ){
		if ( checkpivot(nums, pivot) )	{
			return pivot;
			flag =1;
			break;
		}
		else pivot++;
	}
	return -1;
}	
	
};

int main (){
	vector<int> v1;
	Solution s1;
 
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(0);
	
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	cout << s1.pivotIndex(v1) << endl;
	return 0;
}
