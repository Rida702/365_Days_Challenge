#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	
bool boundrycheck1( vector<int>& nums ){
	int sum=0, sum1=0;
	for(int i =nums.size() - 1; i>0; i--)
		sum1+=nums.at(i);
	if( sum==sum1 )	return true;
	else			return false;
}


	
bool boundrycheck2( vector<int>& nums ){
	int sum=0, sum1=0;
	for( int i =0; i<nums.size() - 1; i++)
		sum1+=nums.at(i);
	if( sum==sum1 )	return true;
	else			return false;
}

//	cout << "Sum: " << sum << endl;
//	cout << "Sum1: " << sum1 << endl;	
	
int pivotIndex(vector<int>& nums) {
int k = nums.size() - 1, i=0;
while(true){
	if ( boundrycheck1(nums) )	{
		return i;
		break;
	}
	else if ( boundrycheck2(nums) )	{
		return k;
		break;
	}
	int sum=0, sum1=0;
    sum1+=nums.at(k);
    sum+=nums.at(i);
    again:
    if ( sum==sum1 && i+1==k-1 )	{
    	return i+1; 
		break;
	}
	else if ( sum<0 && sum1>=0 && i+1!=k-1 )	
	else if ( sum<0 && sum1<0 && sum>sum1 && i+1!=k-1){
		i++;
    	sum+=nums.at(i);
    	goto again;
	}
	else if ( sum<0 && sum1<0 && sum1>sum && i+1!=k-1){
		i++;
    	sum1+=nums.at(i);
    	goto again;
	}
	else if ( sum>sum1 && i+1!=k-1 ){
    	k--;
    	sum1+=nums.at(k);
    	goto again;	}
	else if ( sum<sum1 && i+1!=k-1 ){
		i++;
    	sum+=nums.at(i);
    	goto again;	}
    else if ( ( sum<0 && sum1<0 ) || (sum==sum1 && i+1!=k-1)  ){
    	k--;
    	i++;
    	sum1+=nums.at(k);
    	sum+=nums.at(i);
    	goto again;
	}
    else if ( i+1==k-1 )	return -1;	break;
	}
	return -1;
	
}
};

int main (){

	Solution s1;
	vector<int> v1;
 
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	v1.push_back(-1);
	
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	cout << s1.pivotIndex(v1) << endl;
	return 0;
}
