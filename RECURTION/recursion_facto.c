#include<stdio.h>
int fact(int n){
   if (n==0||n==1)
   {
    return 1;
   }
   return n*fact(n-1);   
}
int main(){
    int n=5;
    int result=fact(n);
    printf("factoria is %d",result);
    return 0;
}