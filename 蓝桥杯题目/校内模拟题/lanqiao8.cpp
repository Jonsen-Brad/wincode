#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,m;
    int k=1;
    cin >> n >> m;
    char grass[4][1000][1000];
    for(int i = 1;i <= n;i++){
        for(int j =1;j <= m;j++){
            cin>>grass[k][i][j];
        }
    }
    
    int mon;
    cin >> mon;
    for(k = 2;k<mon;k++){
        for(int i = 1;k!=1&&i <= n;i++)
            for(int j =1;j <= m;j++)
                grass[k][i][j] = grass[k-1][i][j];
        for(int i = 1;i <= n;i++){
            for(int j =1;j <= m;j++){
                if('g' == grass[k-1][i][j]){
                    grass[k][i-1][j] ='g';
                    grass[k][i+1][j] = 'g';
                    grass[k][i][j-1] = 'g';
                    grass[k][i][j+1] = 'g';
                }
            }
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j =1;j <= m;j++){
            cout << grass[k-1][i][j];
        }
        cout<<endl;
    }

}