#include<iostream>
#include<vector>
using namespace std;

//Two pointer aproach

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
	int flag=0;
	for ( int i=0; i<nums.size(); i++ ){
		if ( checkpivot(nums, i) )	{
			return i;
			flag =1;
			break;
		}
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
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	cout << s1.pivotIndex(v1) << endl;
	return 0;
}
