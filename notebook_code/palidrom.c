#include<stdio.h>
int main(){
    int n,x,r,sum=0;
    printf("enter your number:");
    scanf("%d",&n);
    x=n;
    while(n!=0)    
    {
      r=n%10;
      sum=r+(sum*10);
      n=n/10;
    }
    if(x==sum){
        printf("this number is plidron number");
    }
    else
    printf("this number is not palidom number");
}