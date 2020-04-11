#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    int ans = 0;
    int num[8] = {0};
    cin >> n;
    for(int i = 1;i<=n;i++){
        int a = i;
        int j,k;
        for(j = 0;a != 0;a /=10,j++){
            num[j] = a%10;
        }
        int max = num[0];
        for(k = 0;k < j;k++){
            if(num[k]<=max){
                max = num[k];
            }
            else
                break;
        }
        if(k == j)
            ans++;
    }
    cout<<ans;
}