#include<iostream>
#include<iomanip>
using namespace std;
long int chess[25][25] = {0};

long int countpath(int m,int n){
	long  int dp[25][25] = {0};
	
	for(int i = 2;i<m;i++){
		if(chess[i][2] == 1)
			break;
		dp[i][2] = 1;
	}
		
	for(int i = 2;i<n;i++){
		if(chess[2][i] ==1)
			break;
		dp[2][i] = 1;
	}
		
	for(int i = 3;i <m;i++)
		for(int j = 3;j < n;j++)
			if(chess[i][j] == 0)
			dp[i][j] = dp[i-1][j]+dp[i][j-1];	

	// for(int i = 2;i <m;i++){
	// 	for(int j = 2;j < n;j++)
	// 		cout << setw(5)<<dp[i][j];
	// 	cout <<endl;
	// }
		
	return dp[m-1][n-1];
}
int main(){
	int m,n;
	int x,y;
	cin >> m >> n;
	cin >> x >> y;
	m+=3;n+=3;
	x+=2;y+=2;
	chess[x][y] = 1;
	chess[x-1][y-2] = chess[x-1][y+2] =chess[x-2][y+1] = chess[x-2][y-1] = 1;
	chess[x+1][y-2] = chess[x+1][y+2] =chess[x+2][y+1] = chess[x+2][y-1] = 1;
	cout <<countpath(m,n) <<endl;
}
//草稿
/*
class counter 
{
public:
	counter(int number);
	void increment();      //给原值加1
	void decrement();     //给原值减1
	int getvalue();       //取得计数器值
	int print();         //显示计数
private:
	int value;
};

counter::counter(int number){
	value = number;
}
void counter::increment(){
	value++;
}
void counter::decrement(){
	value--;
}
int counter::getvalue(){

}
//草稿2
class Date
{
public:
	void printDate();         //显示日期
	void setDay(int d);       //设置日的值
	void setMonth(int m);    //设置月的值
	void setYear(int y);      //设置年的值
private:
	int day,month, year;
};
void Date::printDate(){
	cout<<year<<'/'<<month<<'/'<<day<<endl;
}
void Date::setDay(int d){
	day = d;
}
void Date::setMonth(int m){
	month = m;
}
void Date::setYear(int y){
	year = y;
}
*/