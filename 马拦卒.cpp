#include<iostream>
using namespace std;
int chess[100][100] = {0};

int countpath(int m,int n){
	int dp[100][100] = {0};
	for(int i = 0;i<m;i++){
		if(chess[i][0] == 1)
			break;
		dp[i][0] = 1;
	}
		
	for(int i = 0;i<n;i++){
		if(chess[0][i] ==1)
			break;
		dp[0][i] = 1;	
	}
		
	for(int i = 1;i <m;i++)
		for(int j = 1;j < m;j++)
			if(chess[i][j] == 0)
			dp[i][j] = dp[i-1][j]+dp[i][j-1];
			
	return dp[m-1][n-1];
}
int main(){
	int m,n;
	int x,y;
	cin >> m >> n ;
	cin >> x >> y;
	chess[x-1][y-2] = chess[x-1][y+2] =chess[x-2][y+1] = chess[x-2][y-1] = 1;
	chess[x+1][y-2] = chess[x+1][y+2] =chess[x+2][y+1] = chess[x+2][y-1] = 1;
	
	cout <<countpath(m,n) <<endl;
}
