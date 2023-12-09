#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:	
    vector<int> runningSum(vector<int>& nums) {
    int sum=0;
    for( int i=0; i<nums.size(); i++){
        sum+=nums.at(i);
        nums.at(i) = sum;
	}
	return nums;
}
};

int main (){
	Solution s1;
	 vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);       
    for ( int i=0; i<g1.size(); i++)
    	cout << g1.at(i) << " ";
    cout << endl;
 	
 	s1.runningSum(g1);
	for ( int i=0; i<g1.size(); i++)
    	cout << g1.at(i) << " ";
    cout << endl;	
	return 0;
}
