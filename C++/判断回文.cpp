#include<iostream>
using namespace std;
#define Maxsize 100
typedef struct Stuck{
    char *top;
    char *base;
}SqStuck;

void init_Stuck(SqStuck *&s){
    s->base = new char [Maxsize];
    s->top = s->base;

}
void Push_Stuck(SqStuck *&s,char e){
    *s->top = e;
    s->top++;
    
}
char pop_Stuck(SqStuck *&s){
    if(s->top == s->base)
        return '0';
        s->top = s->top - 1;
    return *s->top;
}   



int main(){
    
    char str[100] = {'a'};
    cin >> str;
    SqStuck *s = new SqStuck;
    init_Stuck(s);
    
    int flag = 1;
    for(int i = 0;str[i] != '0';i++ ){
        
        Push_Stuck(s,str[i]);
    }
    
    for(int i = 0;str[i] != '0';i++ ){
        char e = pop_Stuck(s);
        
        if(str[i] != e){
            
            cout << "NO!" << endl;
            flag = 0;
            break;
        }
    }
    if(1 == flag)
        cout<< "YES!" <<endl;
}
