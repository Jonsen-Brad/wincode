//大整数排序

#include <iostream>
using namespace std;
int kulou[52][52] = { 0 };
int n;
int x, y;

int main()
{

    cin >> n;
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> kulou[i][j];
        }
    }
    cout << "Rage!" << endl;

}
