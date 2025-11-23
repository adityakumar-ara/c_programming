#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is maxiam number %d\n",a);
        }
        else
            printf("c is maxiam number%d\n",c);
    }
    else{
        if(b>c)
        {
           printf("b is maxiam number:");
        }
        else
           printf("c is maxiam number");

    }
    return 0;
}