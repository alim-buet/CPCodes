#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int test=1;test<=t;t++){
		int n;
		cin>>n;
		int dp[2*n+100][n+5]; // we have two state, first one is raw number, second one is column number and dp is the state function for 'if we select the dp[][] as a possible path node then what will be the maximum score'
		int curr_row=1, curr_col = 1;
		cin>>dp[1][1];
		int incr=1;
		curr_row++;
		for(curr_col = 1;curr_col<=curr_row;curr_col++){
			if(curr_row>n){
				break;
			}
			
			int el;
			cin>>el;
			if(curr_col==1){
				dp[curr_row][curr_col] = dp[curr_row-1][1] + el;

			}
			else if(curr_col==curr_row){
				dp[curr_row][curr_row] = dp[curr_row-1][curr_row-1]+el;
			}
			else{
				dp[curr_row][curr_col] = max(dp[curr_row-1][curr_col],dp[curr_row-1][curr_col-1])+el;
			}
			if(curr_row==curr_col){
				curr_col=0;
				curr_row++;
			}

		}
		
		curr_row = n+1;
		for( curr_col=1;curr_col<=(2*n)-curr_row ; curr_col++){
			if(curr_row == 2*n){
				break;
			}

			int el;
			cin>>el;
			dp[curr_row][curr_col] = max(dp[curr_row-1][curr_col],dp[curr_row][curr_col+1])+el;
			if(curr_col==((2*n)-curr_row)){
				curr_col=0;
				curr_row++;
			}

		}
		cout<<"Case "<<test<<": "<<dp[2*n - 1][1]<<endl;


	}
	return 0;
}