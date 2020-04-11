#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    int ans = 0;
    int num[1005]={0};
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> num[i];
    }
    int flag1 = 0,flag2 = 0;
    for(int i = 1;i<n-1;i++){
        int head,tail;
        flag1=0;
        for(head = 0;head<i;head++){
            if(num[head]<num[i])
                flag1 = 1;
        }
        flag2=0;
        for(tail = n-1;tail>i;tail--){
            if(num[tail]>num[i])
                flag2 = 1;
        }
        if(flag2==flag1)
            ans++;

    }   
    cout<<ans<<endl;
}