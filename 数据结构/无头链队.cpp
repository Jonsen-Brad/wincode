#include<iostream>
using namespace std;
#define SElemType char
//定义单链表
typedef struct Node{
    SElemType data;
    struct Node *next;
}QNode;

//初始化队列
void init_LQueue(QNode &rear){
    rear.next = NULL;
}

//入队列
void push_LQueue(QNode *rear,SElemType e){
    QNode *p = new QNode;
    p->data = e;
    if(rear->next == NULL){
        p->next = rear;
        rear->next = p;
        rear = rear->next;
    }
    else{
        p->next = rear->next;
        rear->next = p;
        rear = rear->next;
    }
    
}

//出队列，将值赋给e
void pop_LQueue(QNode *rear,SElemType &e){
    QNode* temp = rear->next;
    e = temp->data;
    if(temp->next == rear)
        rear->next = NULL;
    else
        rear->next = temp->next;
    delete temp;
    
}

//主函数
int main(){
    QNode *rear = new QNode;
    
    init_LQueue(*rear);
    SElemType data[20];
    //读入data；
    cin >> data;
    for(int i = 0;data[i]!='\0';i++){
        push_LQueue(rear,data[i]);
    }
    while(rear->next!=NULL){
        SElemType e;
        pop_LQueue(rear,e);
        cout << e <<endl;
        
    }
    return 0;
}