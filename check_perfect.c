#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter your number");
    scanf("%d",&num);
   for(i=1;i<num;i++){
    if(num%i==0){
    sum=sum+i;
      }
   }
   if(sum==num)
    printf("this is perfect number");
   else
   printf("this is not perfect number");
   return 0;
}