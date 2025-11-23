#include<stdio.h>
int main(){
    int year;
    printf("enter your year:");
    scanf("%d",&year);
    if(year%2==0){
        printf("this is not leap year");
    }
    else
     printf("this is  leap year");
}