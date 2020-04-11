#include<iostream>
using namespace std;

void fun(double x, int n) {
	int i,j=1;
	int flag = -1;
	double a = 1;	//分子
	double b = 1;	//分母
	double sum = 1;	//各项的值
	double cos = 1;
	for (i = 1; i <= n; i++) {
		
		
		for (; j <= i * 2; j++) {
			b = b * j;
			a *= x;
		}
		sum = a / b;
		cos += flag * sum;
		flag *= -1;
	}
	cout << cos << endl;
}
int main() {
	double x,n;
	cin >> x >> n;
	fun(x, n);
	return 0;
}