//此文件的功能为将十进制数转换为八进制数

#include<iostream>
using namespace std;
#define MAXSIZE 100

//顺序栈结构体
typedef struct Stuck{
    int *top;
    int *base;
}SqStuck;

//初始化栈
void init_Stuck(SqStuck *&s){
    s->base = new int [MAXSIZE];
    s->top = s->base;

}

//入栈
void Push_Stuck(SqStuck *&s,int e){
    *s->top = e;
    s->top++;
    
}
 
//出栈
char pop_Stuck(SqStuck *&s){
    if(s->top == s->base)
        return '0';
        s->top = s->top - 1;
    return *s->top;
} 

//主函数
int main(){
    int num;
    SqStuck *S = new SqStuck;
    init_Stuck(S);
    cin >> num;
    int temp = num;
    while(temp!=0){
        int a = temp%8;
        Push_Stuck(S,a);
        temp = temp/8;
    }
    int ans = 0;
    while(S->top != S->base){
        ans = ans*10 + pop_Stuck(S);
    }
    cout << ans <<endl;
}
