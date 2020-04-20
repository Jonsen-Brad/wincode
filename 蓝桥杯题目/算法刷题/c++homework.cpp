/*#include<iostream>
using namespace std;
int ans = 0;
int a[];
int Queen_num(int n){
    if(n == 8){
        ans++;
    }
    else{
        
    }
}
int main(){
    
}
*/

#include<iostream>

#include<cstring>

using namespace std;

class Stock{
private:
    char stockcode[100];
    int quantity;
    double price;
public:
    Stock(char na[],int q = 1000,double p = 8.98){
        
        strcpy(stockcode,na);
        quantity = q;
        price = p;
    }

    // ​Stock(char *na,int q = 1000,double p = 8.98){
        
    //     p = 8.98;
    //     strcpy(stockcode,na);
    //     quantity = q;
    //     price = p;
    // }
        int print1(){
            cout<<"stockcode = "<<stockcode<<endl;
            cout<<"quantity = "<<quantity<<endl;
            cout<<"price = "<<price<<endl;
        }
    // ​int print(){
    //     cout<<"stockcode = "<<stockcode<<endl;
    //     cout<<"quantity = "<<quantity<<endl;
    //     cout<<"price = "<<price<<endl;
    // }
};
int main(){

    //​Stock a("600001",3000,5.67);
    char na[] = "600001";
    Stock a(na,3000,5.67);
    //​Stock b("600001");
    Stock b(na);
    // ​a.print1();
    a.print1();

    //​b.print1();
    b.print1();
    

}