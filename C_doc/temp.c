//顺序链表
#include<stdio.h>
#include <cstdlib>
#define Maxsize 100
#define ERROR -1
//定义链表
typedef struct link{ 
    int data[Maxsize];
    int len;
}Link;

//初始化链表
void init_link(Link *Head ){
    Head->len = 0;
    
}

//输入元素，以‘0‘结束
void input_link(Link *Head){
    int x = 1;
    int i = 1;
    while(x != 0){
        scanf("%d",&x);
        Head->data[i] = x;    
        Head->len++;
        i++;
    }
    Head->len--;
}

//显示链表
void output_link(Link *Head){
    int i;
    for(i=1;i<=Head->len;i++){
        printf("%6d",Head->data[i]);
    }
    printf("\n");
}

//查找元素
int find_link(Link *Head,int x){
    int i;
    for(i=1;i<=Head->len;i++){
        if(Head->data[i]==x)
            return i;
    }
    return 0;
}

//删除元素
int delete_link(Link*Head,int i){
    int j;
    if(i<1||i>Head->len) return ERROR;
    for(j=i+1;j<=Head->len;j++){
        Head->data[j-1] = Head->data[j];
    }
    Head->len--;
}

//插入元素到链表尾部
void insert_link(Link*Head, int x){
    Head->len++;
    Head->data[Head->len] = x;
}

//插入元素到链表的i位置
void insert_i_link(Link *Head, int )
int main(){
    Link *L;
    int x;
    int temp;
    L = (Link *)malloc(sizeof(Link));
    init_link(L);
    printf("Please enter number:\n");
    input_link(L);
    printf("Please enter a number: \n");
    scanf("%d",&x);
    temp = find_link(L,x);

    if(temp)
        delete_link(L,temp);
    else
        insert_link(L,x);
    output_link(L);
    return 0;
}