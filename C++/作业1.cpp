#include <iostream>
using namespace std;
#define NUM 20
int f(int n)
{
    if((n == 1)||(n == 2))
        return 1;
    else{
        return f(n-1)+f(n-2);
    }

}
int main()
{
    int *save = new int[20];
    for(int i= 0;i<NUM;i++){
        save[i] = f(i+1);
    }
    for(int i= 0;i<NUM;i++){
        cout << save[i] << " ";
        if(!((i+1)%5))
            cout << endl;
    }
    delete save;
    return 0;
}