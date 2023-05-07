#include<iostream>
using namespace std;

int main(){
	int x1,x2,x3,x4,max;
	cin >> x1;	if(max<x1) max=x1;
	cin >> x2;	if(max<x2) max=x2;
	cin >> x3;	if(max<x3) max=x3;
	cin >> x4;	if(max<x4) max=x4;
	if( (x1==x2 || x1==x3 || x1==x4 || x2==x3 || x2==x4 || x3==x4 ) && ((max/3)*3)==max ) cout << max/3 << " " << max/3 << " " << max/3 << endl;
	else if( max%2!=0 ) cout << max/2 << " " << max/2 << " " << max-2*(max/2) << endl;
	else cout << max/2 << " " << (max/2)-1 << " " << 1 << endl;
	return 0;
}
