#include<iostream>
#include<vector>
using namespace std;

//We don't need to add left most and right most indexes in sum as they are ones who will 
//contribute as rightmost and leftmost pivot 

class Solution {
public:	
	
int pivotIndex(vector<int>& nums) {
    vector<int>left(nums.size());
    vector<int>right(nums.size());
	left[0]=0;
    right[nums.size()-1]=0;
	
    for(int i=1;i<nums.size();i++)
    	left[i]=nums[i-1]+left[i-1];
    for(int i=nums.size()-2;i>=0;i--)
    	right[i]=right[i+1]+nums[i+1];
        
		
    for(int i=0;i<nums.size();i++)
        if(right[i]==left[i]) return i;
    return -1;
}
};


int main (){
	vector<int> v1;
	Solution s1;
 
	v1.push_back(1);
	v1.push_back(7);
	v1.push_back(3);
	v1.push_back(6);
	v1.push_back(5);
	v1.push_back(6);
//	v1.push_back(1);
	
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	cout << s1.pivotIndex(v1) << endl;
	return 0;
}
