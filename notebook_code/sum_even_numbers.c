// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter your number:");
//     scanf("%d",&n);
//     for(int i=0;i<n*2;i=i+2){
//         printf("even number is: %d \n",i);

//        sum=sum+i;

//     }
//     printf("sum is:%d",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,sum=0,i=0;
    printf("enter your number:");
    scanf("%d",&n);

    do{
        
        i=i+2;
        // printf("sum is:%d\n",sum);
         sum=sum+i;
    }
    while(i<=n);
    printf("sum is:%d\n",sum);
    return 0;
 }
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("enter your number:");
//     scanf("%d",&n);
//     for(int i=0;i<n*2;i=i+2){
//         printf("even number is: %d \n",i);

//        sum=sum+i;

//     }
//     printf("sum is:%d",sum);
//     return 0;
// }