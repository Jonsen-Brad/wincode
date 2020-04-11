#include<iostream>
using namespace std;
#define QElemtype char
#define Status void
#define MAQXSIZE 100
#define ERROR 0
#define OK 1

typedef struct node{
    QElemtype *base;
    int front;
    int len;
}SqQueue;

//初始化
void init_LQueue(SqQueue &Q){
    Q.base = new QElemtype[MAQXSIZE];
    Q.front = 0;
    Q.len = 0;
}
//


//入队列
int EnQueue(SqQueue &Q, QElemtype e){
    
    Q.base[(Q.front+Q.len)%MAQXSIZE] = e;
    Q.len++;
    return OK; 
}

//出队列
int OutQueue(SqQueue &Q,QElemtype &e){
    if(!Q.len)return ERROR;
    e = Q.base[Q.front];
    Q.len--;
    Q.front = (Q.front + 1) % MAQXSIZE;
}
int main(){
    SqQueue *Q = new SqQueue;
    
    init_LQueue(*Q);
    char data[100];
    //读入data；
    cin >> data;
    
    for(int i = 0;data[i]!='\0';i++){
        EnQueue(*Q,data[i]);
    }
    while(Q->len!=0){
        QElemtype e;
        OutQueue(*Q,e);
        cout << e;
    }
    cout<<endl;
    return 0;
}




