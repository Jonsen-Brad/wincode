#include <iostream>
#include <stdio.h>
#define scanf_s scanf
using namespace std;    
//以上内容可以依据运行环境进行取舍或者增减

typedef struct node       //单链表C语言存储结构定义
{
	int data;
	struct node *next;  //此处指针类型为什么又是指向此结构体
}linklist,*link;


void init_list(struct node *l)     
//此为初始化函数，初始化只要构造一个头结点，没有数据结点
{
	l=(linklist*)malloc(sizeof(struct node ));
	l->next=NULL;              //为什么此处为空，注意NULL不要小写
}

void build_link(linklist *l,int e)   
{
struct node *r; struct node *p;  //r用来做什么的？           	
r=l;//
while (r->next!=NULL)//
	r=r->next;//
    p=(linklist*)malloc(sizeof(struct node));//
		p->data=e;
	    p->next=r->next;//
		r->next=p;//
		r=p;
}   //思考：此函数是前插法还是后插法？前插法与后插法操作有何区别？  后插法
int findlink(struct node *l,int e)   //本函数实现在单链表中查找值为e的结点，如果有返回1，否则返回0
{
	linklist *p;
	p=l;
	p=p->next;//
	while (p!=NULL && p->data!=e)//
		p=p->next;
	if (p!=NULL) 
		return 1;//
	else
		return 0;//
}     
void displink(struct node *l)  
//此函数建立循环打印单链表结点元素
{
   struct node *p;
   p=l->next;//
   while (p!=NULL)//
   {
	   printf("%6d",p->data);
	   p=p->next;//
   }
}

int main()
{
	struct node *l; int e,k;
	l=(struct node *)malloc(sizeof (struct node));
	l->next=NULL;

	scanf_s("%d",&e);//
	while (e!=0)
	{
		k=findlink(l,e);//
		if (k==0)
			build_link(l,e);
		scanf_s("%d",&e);//
	}
	displink(l);
}
