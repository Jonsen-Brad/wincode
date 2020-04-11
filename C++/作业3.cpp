#include<iostream>
using namespace std;
int baiqian(){
    int sum = 100;
    int one = 1;
    int two = 2;
    int five = 5;
    int ans = 0;
    for(int i = 0; i <= 100; i++){
        for(int j = 0;j <= 50; j++){
            for(int k = 0;k <= 20; k++){
                if(sum == one*i + two*j + five*k){
                    ans++;
                }
            }
        }

    }
    return ans;
}
int main(){
    cout << baiqian() << endl;
}