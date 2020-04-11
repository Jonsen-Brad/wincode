//三连击
#include<iostream>
#define Maxnum 329
using namespace std;

bool Is_different(int a,int b,int c){
    int barrel[10] = {0};
    int temp[3] = {a,b,c};
    for(int i = 0;i < 3;i++){
        int a = temp[i]%10;
        int b = temp[i]/10%10;
        int c = temp[i]/100%10;
        barrel[a]++; 
        barrel[b]++;
        barrel[c]++;
    }
    for(int i = 1;i < 10;i ++){
        if(barrel[i]==0)
            return false;
    }
    return true;

}
int main(){  
    
    int num1 = 123;
    cout<<"start"<<endl;
    for(int i = num1;i <= Maxnum;i++){
        int num2 = num1 * 2;
        int num3 = num1 * 3;
        if(Is_different(num1,num2,num3))
            cout<<num1<<','<<num2<<','<<num3<<endl;
    }


    return 0;
}