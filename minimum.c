#include<stdio.h>
int main(){
    int n,min,a;
    n=10;
    printf("enter your first number");
    scanf("%d",&min);
    for (int i = 0; i < n; i++)
    {
        printf("enter your number");
        scanf("%d",&a);
        if (min>a)
        {
         min=a;
        }
    }
    printf("minimum number is %d",min);
    return 0;    
    
}