#include <iostream>
#include <map>
using namespace std;

//The m.count(x) function in the code snippet you provided is used to check if a specific key, 
//denoted by x, exists in the map m.
//
//When m.count(x) is called, it searches for the key x in the map and returns the number of occurrences of that key. 
//If the key is found, the count will be 1; otherwise, it will be 0.
//
//Regarding the initial contents of the map m, 
//since it is declared inside the for loop, it is created as an empty map at the start of each iteration of the loop. 
//This means that before any key-value pairs are inserted, the map will not contain any elements.
//
//Each iteration of the loop reads a value x from the input, performs some calculations, 
//and then checks for the presence of x in the map using m.count(x). 
//The count will be 0 initially because no elements have been inserted yet. 
//As the loop progresses, key-value pairs are added to the map using m[x]++, 
//allowing subsequent iterations to find and count the occurrences of x.
int main(){
    int t; 
	cin >> t;
    while(t--){
        long long n,x; 
		cin >> n;
        map<long long, long long> m;
		long long ans(0);
        for(long long i = 0; i < n; i++){
			cin >> x;
            x -= i;
            cout << "X-i: " << x << endl;
            cout << "m.count(x): " << m.count(x) << endl;
            cout << "m[x]: " << m[x] << endl;
            if(m.count(x)) { 
				ans += m[x];
			}
			cout << "\n-----\n";
			for (long long it = m.begin(); it != m.end(); ++it) {
		        cout << it->first << ": " << it->second << endl;
		    }
    		cout << "\n-----\n";
			cout << "ans " << ans << endl;
            ++m[x];
        }
	cout << ans << endl;
    }
}

