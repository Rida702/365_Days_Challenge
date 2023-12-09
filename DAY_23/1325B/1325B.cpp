#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, size, element;
    cin>>t;
    for( int run=0; run<t; run++){
        cin >> size;
        set <int> my_set;
        for( int i=0; i<size; i++){
            cin >> element;
            my_set.insert(element);
        }
        cout << my_set.size() << endl;	}
    return 0;
}

