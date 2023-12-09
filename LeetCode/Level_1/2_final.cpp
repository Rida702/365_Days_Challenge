#include<iostream>
#include<vector>
using namespace std;

//Two pointer aproach

class Solution {
public:	
	
int pivotIndex(vector<int>& nums) {
	int left[nums.size()];
	int right[nums.size()];
	int sum=0, sum1, sum2;
	for ( int i=0; i<=nums.size()-1; i++){
		sum+=nums.at(i);
		left[i]=sum;
	}
	sum1 = sum-left[0];
	sum=0;
	for ( int i=nums.size()-1; i>=0; i--){
		sum+=nums.at(i);
		right[i]=sum;
	}
	sum2 = sum-right[nums.size()-1];
	sum=0;
	int flag1,pivot1,flag,pivot=0;
	if( sum==sum1 )	{
		pivot1 = 0;
		flag1  = 1 ;
	}
	else if( sum==sum2 )	{
		pivot1 = nums.size()-1;
		flag1  = 1;
	}

	flag=0,pivot=0;
	for ( int i=0; i<nums.size(); i++){
		for ( int j=nums.size()-1; j>=0; j--){
			if( left[i]==right[j] && i+1==j-1)	{
			pivot = i+1;
			flag=1;
			break;	}
		}
	}
	if ( flag==1 && flag1==1 ){
		if ( pivot1>pivot )	return pivot;
		else				return pivot1;
	}
	else if ( flag==1  )		return pivot;
	else if ( flag1==1  )		return pivot1;
	else						return -1;
}	
	
};

int main (){
	vector<int> v1;
	Solution s1;
 
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);


//	v1.push_back(-1);
//	v1.push_back(-1);
//	v1.push_back(-1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(0);

//	v1.push_back(3);
//	v1.push_back(-3);
//	v1.push_back(0);


//	v1.push_back(-1);
//	v1.push_back(-1);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(0);
//	v1.push_back(0);
	
//	v1.push_back(-1);
//	v1.push_back(-1);
//	v1.push_back(0);
//	v1.push_back(1);
//	v1.push_back(1);
//	v1.push_back(-1);

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);


//	v1.push_back(1);
//	v1.push_back(7);
//	v1.push_back(3);
//	v1.push_back(6);
//	v1.push_back(5);
//	v1.push_back(6);
	for ( int i=0; i<v1.size(); i++)
		cout << v1.at(i) << " ";
	cout << endl;
	
	cout << s1.pivotIndex(v1) << endl;
	return 0;
}
