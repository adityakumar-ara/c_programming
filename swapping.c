#include<stdio.h>
int main(){
    int a,b;
    a=5;
    b=7;
    a+=b;
    ///printf("sum is %d",a);
    b=a-b;
    printf("after swappinf a %d \n",b);
    a=a-b;
    printf("after swapping b : %d \n",a);
    return 0;
}