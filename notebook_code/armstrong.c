#include <stdio.h>
int main()
{
    int n, r, x, sum = 0;
    printf("enter your number:");
    scanf("%d", &n);
    x = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (x == sum)
    {
        printf("this is armosrong number");
    }
    else
        printf("this is not armostron number");

    return 0;
}