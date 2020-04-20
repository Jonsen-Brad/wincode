typedef struct node{
	struct node* lchild;
	struct node* rchild;
	int data;
}*BiTNode,*BiTree;
int count = 0;
void inorder(BiTree T)
{
	iniStack(s);
	p = T;
	while(p||stackEmpty(s))
	{
		if(p){
			push(s,p);
			count++;
			p = p->lchild;
		}
		else{
			pop(s,p);
			cout<<p->data;
			p = p->rchild;
		}
	}
}
//中序遍历统计叶子节点
void count(BiTree T,int &c)
{
	if(T){
		count(T->lchild,c);
		if((!T->lchild)&&(!T->rchild))c++;
		//统计非叶子节点
		//if((T->lchild)||(T->rchild))c++
		count(T->rchild,c);
	}
}
{
	if(T)
		
}
//求二叉树深度
int deep(BiTree T){
	if(!T)
		return 0;
	else{
		L = deep(T->lchild);
		R = deep(T->rchild);
		max = L>R?L:R;
		return max+1;
	}
		
}

//先序建立二叉树
void CreateBiTree(BiTree &T)
{
	cin>>ch;
	if(ch =='#')
		T = NULL;
	else{
		T=new BiTNode;
		T->data = ch;
		CreateBiTree(T->lchild);//递归建立左子树
		CreateBiTree(T->rchild);//建立右子树
	}
}













