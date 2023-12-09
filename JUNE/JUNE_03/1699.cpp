#include<iostream>
using namespace std;
//if values are already assigned recheck them if they are causing an 
//error, upward, forward and backward values put checks on them too 
int main(){
	int test;
	cin>>test;
while(test--){
	int n, m;
	cin >> n;
	cin >> m;
	int a[n][m];
	a[0][0]=1;
	a[0][1]=0;
	a[1][0]=0;
for( int i=0; i<n; i++){
	for( int j=0; j<n; j++){
		//Already assigned values to its neighbourhood 1st Edge
		if(i==0 && j==0) continue;
		else {
			//2nd Edge
			if( (i==0 && j==m-1) ) {
				if(a[i][j]==1) 	a[i][j-1]=0, a[i+1][j]=0;	
				else 			a[i][j-1]=1, a[i+1][j]=1;
			}
			//3rd Edge
			else if (i==n-1 && j==0) {
				if(a[i][j]==1)	a[i-1][j]=0, a[i][j+1]=0;
				else 			a[i-1][j]=1, a[i][j+1]=1;
			}
			//4th Edge
			else if (i==n-1 && j==m-1) {
				if (a[i][j]==1) a[i][j-1]=0, a[i-1][j]=0;
				else 			a[i][j-1]=1, a[i-1][j]=1;
			}
			//1st Row
			else if (i==0){
				if(a[i][j]==0 && a[i][j-1]==1) 		a[i][j+1]=1, a[i+1][j]=0;
				else if(a[i][j]==1 && a[i][j-1]==0) a[i][j+1]=0, a[i+1][j]=1;
				else if(a[i][j]==0 && a[i][j-1]==0) a[i][j+1]=1, a[i+1][j]=1;
				else if(a[i][j]==1 && a[i][j-1]==1) a[i][j+1]=0, a[i+1][j]=0;
			}
			//last Row
			else if(i==n-1){
				if( (a[i][j]==0 && a[i][j-1]==1 && a[i-1][j]==0) ) 		a[i][j+1]=1;
				else 													a[i][j+1]=0;
			}
			//1st Column
			else if(j==0) {
				if( (a[i][j]==0 && a[i-1][j]==0 && a[i][j+1]==1) || 
					(a[i][j]==0 && a[i-1][j]==1 && a[i][j+1]==0) ||
					(a[i][j]==1 && a[i-1][j]==0 && a[i][j+1]==0)  ) 
						a[i+1][j]==1;
				else a[i+1][j]==0;
				
			}
			//last column
			else if(j==m-1){
				if( (a[i][j]==0 && a[i-1][j]==0 && a[i][j-1]==1) || 
					(a[i][j]==0 && a[i-1][j]==1 && a[i][j-1]==0) ||
					(a[i][j]==1 && a[i-1][j]==0 && a[i][j-1]==0)  ) 
						a[i+1][j]==1;
				else a[i+1][j]==0;
			}
			//all other middle values
			else {
				if( (a[i][j]==0 && a[i][j-1]==1 && a[i][j+1]==1) ||
					(a[i][j]==0 && a[i-1][j]==1 && a[i][j+1]==1) ||
					(a[i][j]==1 && a[i][j-1]==1 && a[i][j+1]==1) ||
					(a[i][j]==1 && a[i-1][j]==1 && a[i][j+1]==1)
				) 
						a[i+1][j]=0;
				else a[i+1][j]=1;
			}
		}
	}
}	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
			cout << a[i][j] << " ";
	cout << endl;	
	}
	cout << "\n--------\n";
}
	return 0;
}

//matrix weak area

