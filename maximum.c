#include<stdio.h>
int main(){
    int n,max,a;
    n=10;
    max=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter your number");
        scanf("%d",&a);
        if (max<a)
        {
            max=a;
        }
     
    }
     printf("maximum number %d",max);  
 return 0;   
}