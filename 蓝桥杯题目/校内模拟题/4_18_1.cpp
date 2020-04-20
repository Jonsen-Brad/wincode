#include<iostream>
using namespace std;
int main(){
	int m,n;
	int r,c;
	cin >>m>>n;
	cin>>r>>c;
	int chess[1000][1000]={0};
	int i = 1;
	int j = 1;
	int max = m>n?m:n;
	for (int k = 0;k<max+2;k++){
		chess[0][k] = chess[k][0] = 1;
		chess[m+1][k] = chess[k][n+1] = 1;
	}
	int num = 1;
	
	
	
	while(chess[i-1][j]==0||chess[i+1][j]==0||chess[i][j-1]==0||chess[i][j+1]==0){
		//left
		while(chess[i][j]==0){
			
			chess[i][j]=num++;
			if(chess[i][j+1]!=0)
			break;
			j++;
		}
		i++;
		//down
		while(chess[i][j]==0){
			chess[i][j]=num++;
			if(chess[i+1][j]!=0)
			break;
			i++;
		}
		j--;	
		//right
		while(chess[i][j]==0){
			chess[i][j]=num++;
			if(chess[i][j-1]!=0)
			break;
			j--;
		}
		i--;	
		//up
		for(;chess[i][j]==0;i--){
			chess[i][j]=num++;
			if(chess[i-1][j]!=0)
			break;
		}
		j++;
	}
	
	cout<<chess[r][c];
	return 0;
	
}





//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	int a,b,c;
//	cin >> n;
//	cin >>a>>b>>c;
//	int ans = 0;
//	for(int i =1;i<=n;i++){
//		if(i%a!=0&&i%b!=0&&i%c!=0){
//			ans++;
//		}
//			
//	}
//	cout<<ans;
//	return 0;
//	

/*	char art[100];
	cin >> art;
	for(int i = 0;art[i] != '\0';i++){
		art[i] = (art[i]-'a'+3)%26+'a';
	}
	cout << art;
	
	return 0;*/
//}
