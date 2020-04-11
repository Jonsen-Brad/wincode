//此文件的功能为将十进制数转换为十六进制数

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
        int a = temp%16;
        Push_Stuck(S,a);
        temp = temp/16;
    }
    
    
    while(S->top != S->base){
        switch (pop_Stuck(S)) {
            case(0):cout << "0"; break;
            case(1):cout << "1"; break;
            case(2):cout << "2"; break;
            case(3):cout << "3"; break;
            case(4):cout << "4"; break;
            case(5):cout << "5"; break;
            case(6):cout << "6"; break;
            case(7):cout << "7"; break;
            case(8):cout << "8"; break;
            case(9):cout << "9"; break;
            case(10):cout << "A"; break;
            case(11):cout << "B"; break;
            case(12):cout << "C"; break;
            case(13):cout << "D"; break;
            case(14):cout << "E"; break;
            case(15):cout << "F"; break;
        }
            
    }
    
}
