#include<iostream>
#include<cstring>
using namespace std;
char ruler[5] = {'a','e','i','o','u'}; 
bool Is_in_ruler(char a){
    for(int i = 0;i < 5;i++){
        if(a == ruler[i])
            return true;
    }
    return false;
}
int main(){
    char str[105];
    
    cin >> str;
    int i = 0;
    int fu = 0;
    int yuan = 0;
    
    while(str[i] != '\0'){
        int flag1 = 0;
        for(;!(Is_in_ruler(str[i]))&&str[i]!='\0';i++){
            flag1 = 1;
        }
        fu = fu +flag1;
         
        int flag2 = 0;
        for(;Is_in_ruler(str[i])&&str[i]!='\0';i++){
            flag2 = 1;
        }
        yuan = yuan +flag2;
        
        
    }
    if(2 == fu && 2 == yuan)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
}