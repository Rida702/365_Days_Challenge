#include<iostream>
using namespace std;

int main(){
	int n = 54321;
	int x = 17;
	int y = 8;
	cout << n%x << endl;
	if(n%x<y) {
		n-=(x-(y-(n%x)));
		cout << "Here 1" << endl;
	}
	else if (n%x>y){
		n-=( (n%x)-y );
		cout << "Here 2" << endl;
	}
	cout << n << endl;
	//cout << 1%5 << endl;
	return 0;
}

//1
//17 8 54321
