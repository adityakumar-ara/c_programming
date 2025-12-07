#include <stdio.h>
void printnum(int num)
{
   
    if (num == 0)
    {

        return;
    }

    printnum(num - 1);
     printf("%d\n", num);
}

int main()
{
    int num;
    printf("enter your numbr:");
    scanf("%d", &num);
    printnum(num);
    return 0;
}