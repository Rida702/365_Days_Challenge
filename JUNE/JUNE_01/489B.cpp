#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	int boys[n];
	for(int i=0; i<n; i++) cin >> boys[i];
	
	cin >> m;
	int girls[m];
	for(int i=0; i<m; i++) cin >> girls[i];
	
	sort(boys, boys+n);
	sort(girls, girls+m);
	int pairs=0;
	for(int i=0;i<n;i++){
		int j=0;
		if( pairs==m || pairs==n) break;
		while(true){
			if( girls[j] == (boys[i]-1) || girls[j] == (boys[i]+1) || girls[j] == boys[i] ) {
				pairs++;
				girls[j]=-1;
				break;
			}
			j++;
			if(j==m) break;
		}
	}
	cout << pairs << endl;
	return 0;
}
