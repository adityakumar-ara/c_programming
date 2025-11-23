#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter natural number:");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
     sum=sum+i;
    {  
     printf("sum is:%d \n",sum);
        
    }
    return 0;
}

