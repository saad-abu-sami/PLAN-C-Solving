#include<stdio.h>
int main(){
   int i,k,l,m,n,d,p=0;
   scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
   for(i=1;i<=d;i++)
   if(i%k==0||i%l==0||i%m==0||i%n==0){
      //1%2=/=0||1%3=/=0|| 1%4=/=0|| 1%5=/=0, so p=0
      //2%2==0 so p=1 ; 3%3==0 so p=1+1=2 ; 4%4==0 so p=2+1=3 ;
      //Like these 2,3,4,5,6,8,9,10,12,14,15 = 11; These number are divided by 2,3,4,5;
      //But 1,7,11,13 are not divided by 2,3,4,5;
   p=p+1;
   }
   printf("Princess physical damage tonight :%d",p);
   return 0;
}
