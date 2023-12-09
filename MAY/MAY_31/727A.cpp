#include<iostream>
#include<stack>
using namespace std;

int main(){
	int a,b;
	cin >> a;
	cin >> b;
	int c = b, count=1, flag=1;
	stack<int> stk;
	stk.push(c);
	while(c!=a){
		if(c%2==0) {
			c = c/2;
			stk.push(c);
			count++;
		}
		else {
			if(c%10!=0){
				c=c-1;
				if(c%10!=0) {
					flag=0;
					break;
				}
				else c = c/10;
			}
			else if(c%10==0){
				c=c/10;
				c = c-1;
			}
			stk.push(c);
			count++;
		}
		if( c<a || flag==0 ){
				flag=0;
				break;
		}
	}
	if(flag==0) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << count << endl;
		int value;
		for( int i=0; i<count; i++){
			value = stk.top();
			stk.pop();
			cout << value << " ";
		}
		cout << endl;
	}
	return 0;
}

//1 1000000000
