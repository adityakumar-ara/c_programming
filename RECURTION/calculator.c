#include<stdio.h>
int main(){
    printf("---welcome---\n");
    int a,b;
    char choose;
    printf("enter number,choose +,-,*,/,% , enter number \n");
    scanf("%d%c%d",&a,&choose,&b);
   if ( choose=='+')
    {
     printf("Sum is: %d\n",a+b);
    }
    else if ( choose=='-')
    {
     printf("substration is: %d\n",a-b);
    }
    else if ( choose=='*')
    {
     printf("Multiplication is:%d\n ",a*b);
    }
    else if ( choose=='/')
    {
     printf("devision is:%d \n",a/b);
    }
    else if ( choose=='%')
    {
     printf("Reminder is:%d \n",a%b);
    }
    else 
    printf("inviled your choose");
    return 0;
}