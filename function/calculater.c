#include<stdio.h>
void calculator(){
    int a,b,cal;
    printf("enter your two number:");
    scanf("%d%d",&a,&b);
    printf("enter 1 for(+), enter 2 for (-), enter 3 for(*), emter 4 for(/):");
    scanf("%d",&cal);
    
    switch (cal)
    {
    case 1: printf("sum is:%d\n",a+b,cal);
        break;
    case 2: printf("substraction is:%d\n",a-b,cal);
        break;
    case 3: printf("multiplication is:%d\n",a*b,cal);
        break;
    case 4: printf("divide is:%d\n",a/b,cal);
        break;
    default: 
       printf("eneter your currect number\n");
        break;
    }
}
int main(){
    calculator();
    return 0;
}