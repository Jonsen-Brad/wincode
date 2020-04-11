//字符串查找	BF算法
#include<iostream>
#include<cstring>
using namespace std;
#define MAXSIZE 100
typedef struct Node{
	char ch[MAXSIZE];
	int length;
}SString;

//BF
// int index_BF(SString S,SString T){
// 	int i = 1;int j=1;
// 	while(i<=S.length&&j<=T.length){
// 		if(S.ch[i]==T.ch[j]){i++;j++;}
// 		else{i = i-j+2;j=1;}
// 	}
// 	if(j>T.length)return i-T.length;
// 	else return 0;
// }

//Get the next array
void Getnext(SString* T,int next[100])
{
	int i,j;
	i = 1;
	next[1] = 0;j=0;
	while(i <T->length)
		if(j == 0||T->ch[i] == T->ch[j]){
			++i;++j; next[i] = j;
		}
		else j = next[j];
}

//KMP
int index_KMP(SString S,SString T,int *next){
	int i = 1;int j=1;
	while(i<=S.length&&j<=T.length){
		if(S.ch[i]==T.ch[j]){i++;j++;}
		else{j = next[j];}
	}
	if(j>T.length)return i-T.length;
	else return 0;
}


//初始化
void init_sstring(SString T){
	T.length = 0;
}
int main(){
	int next[100];
	SString *str = new SString;
	SString * mon = new SString;
	str->ch[0] = mon->ch[0] = '0';
	cin >> str->ch;
	cin >> mon->ch;
	for(int i = strlen(str->ch);i>0;i--){
		str->ch[i+1] = str->ch[i];
	}
	str->length = strlen(str->ch);
	for(int i = strlen(mon->ch);i>=1;i--){
		mon->ch[i+1] = mon->ch[i];
	}
	mon->length = strlen(mon->ch);
	//int flag = 0;
	
	Getnext(mon,next);
	cout << index_KMP(*str,*mon,next)<<endl;
	/*
	for(int i=0;str[i]!='\0';i++){
		for(int j=0;mon[j]!='\0';j++){
			if(str[i+j]!=mon[j]){
				flag = 0;
				break;
			}
			else
				flag = 1;
		}
		if(flag == 1){
			cout <<"Find it!"<<endl;
			break;
		}
	}
	if(flag != 1){
		cout <<"Didn't find it!"<<endl;
	}
	*/

}
//KMP算法
// char l[100];
// char *f(char *l){
// 	char next[strlen(l)];
// 	int k,i = 0;
// 	next[1] = 0;
// 	next[2] = 1;
// 	for(int j = 3;j<=strlen(l);j++){
// 		for(k = j-1;k>0;k--){
// 			for(i = 1;i < k;i++){
// 				if(l[i] != l[j-k+i-1])
// 				break;
// 			}
// 			if(i == k-1){
// 				next[j]=k+1;
// 				break;
// 			}
				
// 		}
		
// 	}
// 	return *next;
	
// }



//草稿
/***************************************
class CStudent{
	public:
		CStudent();							//缺省构造函数
		CStudent(int n,char*na,float s);	//构造函数
		~CStudent();						//析构函数
		void mondify(float s);
		void display();
	private:
		int sid;
		char *name;
		float score;
};
CStudent::CStudent(int n,char *na, float s){
	sid = n;
	score = s;
	name = new char[strlen(na)];
	strcpy(name,na);
}
//改为如下更常用
CStudent::CStudent(int n,char *na,float s):sid(n),score(s){}

//声明
CStudent(const CStudent& stu);
//定义
CStudent::CStudent(const CStudent& stu){
	sid = stu.sid;
	score = stu.score;
	name = new char[strlen(stu.name)+1];
	strcpy(name,stu.name);
}
****************************/