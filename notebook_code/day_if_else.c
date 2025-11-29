#include <stdio.h>
int main()
{
    int day;
    printf("enter your number:");
    scanf("%d", &day);
    if (day == 7)
    {
        printf("monday");
    }
    else if (day == 2)
    {
        printf("tuesday");
    }
    else if (day == 3)
    {
        printf("wednesday");
    }
    else if (day == 4)
    {
        printf("thursday");
    }
    else if (day == 5)
    {
        printf("friday");
    }
    else if (day == 6)
    {
        printf("saturaday");
    }
    else if (day == 1)
    {
        printf("sunday");
    }
    else
    {
        printf("your number is inviled");
    }
    return 0;
}