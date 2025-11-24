// #include<stdio.h>
// int main(){
//     int n,x,r,d,sum=0;
//     printf("enter your number:");
//     scanf("%d",&n);
//     x=n;
//     while(n!=0){
//         r=n%10;
//         sum=r+(10*sum);
//         n=n/10;
//     }
//     if(x==sum)
//       printf("this number is palidrom number");
//     else
//       printf("this number is not palidrom number");
//       return 0;  
    
// }
#include<stdio.h>
void palidrom(){
    int n,x,r,sum=0;
    printf("enter your number:");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(x==sum){
        printf("this number is palidrom");
    }
    else
     printf("this number ia not palidrom");
}
int main(){
    palidrom();
    return 0;
}