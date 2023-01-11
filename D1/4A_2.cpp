#include<iostream>
using namespace std;
 
int main (){
	int num;
	cin >> num;
	if(num%2!=0)					cout << "NO\n";
	else{
		if (int(num/2)%2==0)		cout << "YES\n";
		else	{
			if (int(num/2)-1!=0)	cout << "YES\n";
			else					cout << "NO\n";	
		}
	} 
	return 0;
}
