// #include<stdio.h>
// int main(){
//     int a,b,c;
//     long long product;
//     printf("enter your three numbers:");
//     scanf("%d%d%d",&a,&b,&c);
//     product=a*b*c;
//     printf("product of your numbers is %lld",product);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, n;
    long long product = 1;
    printf("enter your three numbers:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("enter your numbers%d:", i);
        scanf("%d", &a);
       product= product * a;
    }
    printf("product of your numbers is %lld\n", product);
    return 0;
}
