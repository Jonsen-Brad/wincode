#include<iostream>
using namespace std;
//在此处写3个swap重载函数
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void swap(float &a,int &b){
    float temp = a;
    a = b;
    b = temp;
}
void swap(double &a,double &b){
    double temp = a;
    a = b;
    b = temp;
}
int main(){
int a, b;
float c, d;
double e, f;
cin >> a >> b >> c >> d >> e >> f;
swap(a, b);
swap(c, d);
swap(e, f);
cout << a << " " << b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
system("pause");
return 0;
}
