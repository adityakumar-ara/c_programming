#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c=0; // a is curent b is next nmber c is new turm
    printf("enter your number:");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d \n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}