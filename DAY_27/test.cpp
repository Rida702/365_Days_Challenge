//1st Solution Not Optimized
#include<iostream>
using namespace std;

int main(){
	int n, result=0;
	cin >> n;
	for( int i=1; i<=n; i++){
		if(i%2==0) result+=i;
		else	   result-=i;
	}
	cout << result << endl;
	return 0;
}

//2nd Solution - signed integer overflow
//A signed integer overflow occurs when the result of an arithmetic operation is outside the range of values 
//that the output data type can represent. The C programming language does not define the results of such operations.
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int even_sum = (n/2)*((n/2)+1);
	int odd_sum = pow(n-(n/2),2);
	cout << even_sum-odd_sum << endl;
	return 0;
}


