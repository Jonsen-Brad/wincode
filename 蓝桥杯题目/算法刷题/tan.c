#include<stdio.h>
  int main()
  {
   const  int maxnumber=25;
   int isprime[maxnumber];
   int i ;
   int x;
   for(i=0;i<maxnumber;i++)
   {
    isprime[i]=1;
   }
   for(x=2;x<maxnumber;x++)
   {
    if (isprime[x]){
     for(x=2;i*x<maxnumber;x++){
      isprime[i*x]=0;
     }
    }
   }
   for(i=2;i<maxnumber;i++){
    if (isprime[i]){
    printf("%d\t",i); 
   }
   }
   printf("\n");
   return 0;
    }