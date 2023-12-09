#include <iostream>
using namespace std;

int main(){
    int m,n , count=0;
	cin >> m;
	cin >> n;
    while (n != m) {
        if (n>m) {
            if (n % 2 == 0) {
            	n = n/2;
				count++;
			}	
            else {
            	n++;
				count++;
			}
		}
    	else if (m>n) {
    		n++;
			count++; 
		}
	}
    cout << count << endl;
	return 0;
}
