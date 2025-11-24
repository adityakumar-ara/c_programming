#include<stdio.h>
int main(){
    int n,sum=0,c=5;
    printf("enter your number:");
    scanf("%d",&n);
    for(int i=0;i<n*2;i=i+2){
         printf("even number is%d \n",i);
        sum=sum+i;
    }
     printf("sum is:%d",sum);
}