#include<stdio.h>
#define Maxsize 100
//��������
typedef struct link {
    int data[Maxsize];
    int len;
}Link;

//��ʼ������
void init_link(Link* Head) {
    Head->len = 0;

}

//����Ԫ�أ��ԡ�0������
void input_link(Link* Head) {
    int x = 1;
    int i = 1;
    while (x != 0) {
        scanf_s("%d", &x);
        Head->data[i] = x;
        Head->len++;
    }
    Head->len--;
}

//��ʾ����
void output_link(Link* Head) {
    int i;
    for (i = 1; i <= Head->len; i++) {
        printf("%6d", Head->len);
    }
}
int main() {
    Link* L=0;
    init_link(L);
    printf("Please enter number:\n");
    input_link(L);
    output_link(L);
    return 0;
}