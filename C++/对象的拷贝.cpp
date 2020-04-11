#include<iostream>
// #include<iomanip>
#include<cstring>
using namespace std;
class CStudent{
    int sno;
    char *name;
    float score1;
    float score2;
public:
    CStudent(int sno,char* name){
        this->sno = sno;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
        score1 = 60;
        score2 = 60;
    }
    
    CStudent(CStudent& stu){
        sno = stu.sno;
        score1 = stu.score1;
        score2 = stu.score2;
        this->name = new char[strlen(stu.name)+1];
        strcpy(this->name,stu.name);
        std::cout <<"在拷贝构造函数中。sno="<<sno<<std::endl;
    }
    CStudent(int sno){
        this->sno = sno;
    }
    void SeScore(float score1,float score2){

    }
    void setSno(int s){
        sno = s;
    }
    char *GetName(char *str){
        str = this->name;
    }
    int GetSno(){
        return sno;
    }
    float GetScore1(){
        return score1;
    }
    float GetScore2(){
        return score2;
    }
    ~CStudent();
};
// void CStudent::SetName(char *str){
//     strcpy(this->name,str);
// }
// char *CStudent::GetName(){
//     return this->name;
// }
CStudent::~CStudent(){
    delete[]name;
}
int main(){
    char str[10] = "Jonsen";
    CStudent a(100,str);
    
    // a.SetName(str);
    a.setSno(100);
    cout<<a.GetSno();
    CStudent b = a;
    b.GetName(str);
    cout << str;
    ~CStudent();
}