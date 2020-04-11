#include<iostream>
typedef struct StackNode
{
    SElemType data;
    struct StackNOde *next;
}StackNode,*LinkStack;

StackNode *q;
LinkStack p;

//初始化
void InitStack(LinkStack &s){
    s = NULL;
    return OK;
}
//入栈
status Push(LinkStack &s,SElemType e){
    p = new LinkStack;
    p->data = e;
    p->next = s;
    s = p;
    return OK;
}
//出栈
SElemType Pull(LinkStack &s,SElemType &e){
    if(s == NULL) return ERROR;
    LinkStack *p;
    e = s->data;
    p = s;
    s = s->next;
    delete p;
    return OK;
}
//取栈顶元素
SElemType Pull(LinkStack &s,SElemType &e){
    if(s!=NULL)return s->data;
}
int main(){

}
int fun(int n){
    if(n == 1)
        return 1;
    return n*fun(n-1);
}

//汉诺塔
void hanoi(char A,char B,char C,int n){
    if(n == 1){
        cout<<"A->C"<<endl;
    }
    else{
        hanoi(A,B,C,n-1);
        cout<<"A->C"<<endl;
        hanoi(B,A,C,n-1);
    }
}
if(a<b)return 0;
else if(b ==0)return 1;
else{
    return f(a-1,b)+f(a,b-1);
}