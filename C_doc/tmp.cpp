#include<iostream>
using namespace std;
int main(){ 
    int a = 3,b = 5;
    int * pa = &a;
    int * pb = &b;
    swap(pa,pb);
    cout << *pa << "," <<*pb;
  return 0;  
}
