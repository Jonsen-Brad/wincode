#include<iostream>
using namespace std;
int ** create2DArray(int d1, int d2)
{
//在此处输入你的代码
int ** tp;
tp = (int**)new int *[d1];
for(int i = 0;i < d1;i++)
    tp[i] = (int*)new int[d2];
return tp;

}
void destory2DArray(int ** array,int d1)
{
//在此处输入你的代码
for(int i = 0; i < d1; i++ )
    delete[] array[i];
delete[] array;

}
int main(){
int d1, d2,**p;
cin >> d1 >> d2;
p = create2DArray(d1, d2);
for (int i = 0; i < d1;i++)
for (int j = 0; j < d2; j++)
p[i][j] = i + j;
for (int i = 0; i < d1; i++)
{
for (int j = 0; j < d2; j++)
cout << p[i][j]<<" ";
cout << endl;
}
destory2DArray(p,d1);
system("pause");
return 0;
}