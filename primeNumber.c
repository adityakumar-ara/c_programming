#include<stdio.h>
 int main(){
    int number,count=0;
    printf("enter your number");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
      if(number%i==0){
        count++;
      }
     
    }  
    if(count==2) {
        printf("your number is primr number");
    }
    else
     printf("your number is not prime");
 }