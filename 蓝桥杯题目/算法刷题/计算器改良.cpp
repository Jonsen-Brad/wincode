#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdio>
using namespace std;
// int main(){
//     int num[100] = {0};
//     char str[100];
//     str[0] = '%';
//     char c;
//     int i;
//     for(i = 1;str[i-1]!='\n';i++)
//         str[i] = getchar();
    
//     for(int j = 0;j < i;j++)
//         cout<< str[j] ;
// }
int main(){
    int bian[10] = {0};
    int chang[10] = {0};
    char temp = getchar();
    char A;
    int flag = 1;
    int flag1 = 1;
    int i = 0;
    int j = 0;
    int sum;
    while(temp != '\n'){
        
        if(temp == '-'||temp == '+'||temp == '=')
            flag = (temp =='-'?-1:1);
        sum = 0;
        while(temp >='0'&&temp<='9'){
            sum = sum*10+(temp)-'0';
            temp = getchar();
        }
        if(temp>='a'&&temp<='z'&&sum==0){
                A=temp;
                bian[i++] = 1;
        }
        if(sum!=0){
            if(temp>='a'&&temp<='z'){
                A = temp;
                bian[i++] = sum*flag*flag1;
            }
            else
            {
                chang[j++] = sum*flag*flag1;
            }
            
        }
        // else
        //     if(temp>='a'&&temp<='z'){
        //         A=temp;
        //         bian[i++] = 1;
        //     }

                
        
            
        if(temp == '=')
            flag1 = -1;
        if(sum == 0||temp>='a'&&temp<='z')
            temp = getchar();
        if(temp == '\n')
            break;
    }
    double Bian=0.00;
    double Chang = 0.00;
    for(int x = 0;x<i;x++)
        Bian += bian[x];
    for(int x = 0;x<j;x++)
        Chang += chang[x];
    
    double ans = Chang/Bian;
    if(ans == 0)
        printf("%c=%.3f",A,ans);
    else
    {
        printf("%c=%.3f",A,-ans);
    }
    
}