// #include<stdio.h>
// int fact(int n);
// int main(){
//     int n;
//     printf("enter your number:");
//     scanf("%d",&n);
//     printf("the factorial is %d=%d",n,fact(n));
//     return 0;
// }
// int fact(int n){
//     if (n>=1)
//     {
//        return (n*fact(n-1));
//     }
//     return 1;
// }ll̥

#include<stdio.h>
int number(int n);
int main(){
    int n;
    printf("enter your number");
    scanf("%d",&n);
   printf("the number is:%d=%d",n,number(n));
   return 1;
}
int number(int n){
    int i=0;
    int result=i+2;
    if(i==n)
    {
        return 1;
    }
    return number(i+2);
    printf("%d",result);

}