#include<iostream>
using namespace std;
int main(){
    int num= 0;
    while(num ==2){
    int n;
    
    int flag=0;
    cin >> n;
    int j=1;
    while(j !=2*n+2){
        for(int i = 0;i < n-flag;i++)
            cout << '.';
        for(int i = 0;i < 1+2*flag;i++)
            cout << '*';
        for(int i = 0;i < n-flag;i++)
            cout << '.';
        cout<< endl;
        if(j >= n+1)
            flag--;
        else
        {
            flag++;
        }
        j++;
    }
    num++;
    cout<<endl;
    }
}