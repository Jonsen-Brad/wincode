/********************************************************************

??????????��???:????????????????,???????????????????????????????��???,??????????????????,??????????????????��??,????????????????????????????????????C???????????:

#include <stdio.h>

int  main( )

{

       int salary_A, salary_B;

       printf("?????????A?????B?????:\n");

       scanf("%d%d",&salary_A,&salary_B);

       if(salary_A>=salary_B)           //???salary_A??salary_B??��

              printf("???A???????,??????:%d",salary_A);

       else

           printf("???B???????,??????:%d",salary_B);

    return 0;

}

????????C????????��?C++ ???????,???????????????,???��?
********************************************************************/
#include<iostream>
using namespace std;
int main() {
	
    int salary_A, salary_B;

    
    
    cin>>salary_A>>salary_B;

    if (salary_A >= salary_B)           //???salary_A??salary_B??��

        cout<<salary_A<<endl;

    else

        cout<<salary_B<<endl;
    return 0;
}
