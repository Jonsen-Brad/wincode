#include<iostream>
#include<iomanip>
using namespace std;
typedef struct Node {
    int data;
    struct Node* next;
}LNode, * LinkList;

//头插法创建单链表
LNode* create_list_head() {
    LNode *L;
    LNode* s;
    L = new LNode;
    L->next = NULL;
    int *a = new int;
    int x;
    cin >> x;
    while (x != -1) {
        s = new LNode;
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    return L;
}


//尾插法创建单链表
LNode* create_list_tail() {
    LNode* L;
    LNode* s;
    LNode*r;
    L = new LNode;
    L->next = NULL;
    r = L;
    int x;
    cin >> x;
    while (x != -1) {
        s = new LNode;
        s->data = x;
        //         已解决
        r->next = s;
        r = s;
        cin >> x;
    }
    r->next = NULL;
    return L;
}
void insert_link(LNode* Head, int i, int a) {
    int j;
    LNode* p = Head;
    LNode* temp;
    for (j = 0; j < i - 1; j++) {
        p = p->next;
    }
    temp = new LNode;
    temp->data = a;
    temp->next = p->next;
    p->next = temp;
}
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
void display_link(LNode* Head) {
    LNode* p = Head->next;
    while (p != NULL) {
        cout << setw(6)<<p->data;
        p = p->next;
    }
    cout << endl;
}

//p = (LinkList)malloc(sizeof(LinkList));

int main(int argc,char **argv) {
    LNode* L;
    cout << "Please enter list,end with '-1' " << endl;
    L = create_list_head();
    cout << "Please enter the number and which number you want to insert in this list." << endl;
    int x, i;
    cin >> x >> i;
    insert_link(L, i, x);
    display_link(L);
    cout << "Please enter the number that you want to delete from this list" << endl;
    cin >> i;
    delet_link(L, i);
    display_link(L);
    return 0;
}
