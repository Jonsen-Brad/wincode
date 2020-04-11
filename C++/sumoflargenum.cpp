#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char A[1001];
    char B[1001];
    int sum[1007] = {0};
    int SS = 0;
    int SS_add = 0;
    int SA = 0;
    int SB = 0;
    
    cin>>A;
    cin>>B;
    SA = strlen(A)-1;
    SB = strlen(B)-1;
    while((SA != 1001)||(SB != 1001)){
        int temp ;
        temp = (A[SA]-'0')+(B[SB]-'0');
        sum[SS] = (temp+SS_add)%10;
        SS_add = (temp+SS_add)/10;
        SS++;
        if(SA == 0||SA == 1001){
            SA = 1001;
            A[SA] = '0';
        }    
        else
            SA--;
        if(SB == 0||SB == 1001){
            SB = 1001;
            B[SB] = '0';
        }
        else
            SB--;
        
            
    }
    if(SS_add == 1){
            sum[SS] = 1;
            SS++;
        }
    for(int i = SS-1;i >=0;i--)
        cout<<sum[i];
}