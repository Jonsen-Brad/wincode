#include<iostream>
using namespace std;
//typedef 100 MAXQSIZE;
#define MAXQSIZE 100
//typedef 100 MAXSIZE;
#define MAXSIZE 100
//typedef char QElemType;
#define QElemType char
//typedef void Status;
#define Status void

//return (Q.rear-Q.front+MAXQSIZE) % MAXQSIZE;
//判断为满
// bool isfull(SqQueue &Q){
//     if((Q.rear+1)%MAQXSIZE == Q.front)
//         return true;
//     else 
//         return false;
// }

//取头

//判断队空
// bool isnull(SqQueue &Q){
//     if(Q.front == Q.rear)
//         return true;
//     return false;
// }


//顺序队列结构体
typedef struct node{
    QElemType *base;
    int rear,front;
    int len;
}SqQueue;


//顺序栈结构体
typedef struct Stuck{
    char *top;
    char *base;
}SqStuck;

//初始化队列
void initQueue(SqQueue &Q){
    Q.base = new QElemType[MAXSIZE];
    Q.rear = Q.front = 0;
}

//入队列
Status EnQueue(SqQueue &Q,QElemType e){
    // if(isfull(Q))return ERROR;
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXQSIZE;
    // return OK;
}

//出队列
char OutQueue(SqQueue &Q){
    char e;
    // if(Q.rear ==Q.front)return ERROR;
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXQSIZE;
    return e;
}

//初始化栈
void init_Stuck(SqStuck *&s){
    s->base = new char [MAXSIZE];
    s->top = s->base;

}

//入栈
void Push_Stuck(SqStuck *&s,char e){
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

int main(){
    SqQueue *Q= new SqQueue;
    SqStuck *L;
    
    L = new SqStuck;
    initQueue(*Q);
    init_Stuck(L);
    char *e;
    cin >> e;//ABCD
    int i;
    for(i = 0;e[i]!='\0';i++){
        EnQueue(*Q,e[i]);
        Push_Stuck(L,e[i]);
    }
    for(;i>0;i--){
        if(pop_Stuck(L)!=OutQueue(*Q))
            break; 
    }
    if(i == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}