#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,n;
	cin >> m >> n;
	int a = m/2+1;
	long int ans = 0;
	
	for(int i = 1;i<n;i++){
		long  temp = pow(n-i,a);
		
		ans += (temp%10000);
		ans%=10000;
	}
	cout<<ans;
	return 0;
	
}
