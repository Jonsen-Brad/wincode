#include<iostream>
#include<iomanip>
using namespace std;

int a[10]={1,2,3,4,5,6,7,8,9,0};
typedef struct Node {
    int data;
    struct Node* next;
}LNode, * LinkList;

//尾插法创建循环单链表
LNode* create_list_tail() {
    LNode* L;
    LNode* s;
    LNode*r;
    int i = 0;
    L = new LNode;
    L->next = L;
    r = L;
    
    
    while (i!=10) {
        s = new LNode;
        s->data = a[i];
        r->next = s;
        r = s;
        
        i ++;
    }
    
    return L;
}

//删除元素
void delet_link(LNode* Head, int i) {
    int j;
    LNode* p = Head;
    LNode* temp;
    for (j = 0; j < i - 1; j++) {
        p = p->next;
    }
    temp = p->next;
    p->next = temp->next;
    free(temp);
}

int main(){
    int n;
    cin >> n;
    LNode *L = new LNode;
    L = create_list_tail();
    LNode*p = L->next;
    while(L->next != L){
        LNode* temp;
        for(int i = 0;i < n;i++){
            temp = p;
            p = p->next;
        }
        temp->next = p->next;
        temp = p;
        p = p->next;
        delete temp;
    }
    cout<< L->data<<endl;
}