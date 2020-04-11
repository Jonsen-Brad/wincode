#include <iostream>
#include<cmath>
using namespace std;
#define NUM 20
double sroot(int num){
    return sqrt(num);
}
double sroot(float num){
    return sqrt(num);
}
double sroot(double num){
    return sqrt(num);
}
int main()
{
    int a = 10;
    float b = 10.5;
    double c = 21.54;
    cout <<sroot(a)<<endl;
    cout <<sroot(b)<<endl;
    cout<<sroot(c);

    return 0;
}