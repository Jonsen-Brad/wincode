#include<iostream>
#include<typeinfo>
using namespace std;
//在此处添加Swap函数模板
template <typename T>
void max(T &a, T &b){
    T temp = a;
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
