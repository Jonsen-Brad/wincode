//链队
typedef struct node
{
    char data;
    struct node *next;
}*QueuePtr;

typedef struct{
    QueuePtr front;
    QueuePtr rear;
}LinkQueue;

//初始化
Status InitQueue(LinkQueue &Q)
Q.front = Q.rear = new QNode;
Q.front->next = NULL;
return OK;

//入队列
Status EnQueue(LinkQueue &Q,QElemtype e)
{
QueuePtr p = new QueuePtr;
p->data = e;
p->next = NULL;
Q.rear->next = p;
Q.rear = p;
return OK;
}

//出队列
Status DeQueue(LinkQueue &Q,QElemtype e){
    QueuePtr p = Q.front->next;
    e = p->data;
    Q.front = p;
    QueuePtr q = Q.front;
    if(Q.rear == p)Q.rear=Q.front;
    delete q;
}