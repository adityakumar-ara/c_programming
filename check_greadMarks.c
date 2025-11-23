#include<stdio.h>
int main(){
    int mark;
    printf("Hello,enter your marks");
    scanf("%d",&mark);
    if(mark==0 || mark<=39){
     printf("your gread is :F");
    }
    else if(mark<=40 || mark<=49){
        printf("your gread is :D");
    }
    else if(mark<=50 || mark<=59){
     printf("your gread is :C");
    }
    else if(mark<=60 || mark<=79){
        printf("your gread is :B");
    }
    else if(mark>=80 || mark<=100){
        printf("your gread is :A");
    }
}