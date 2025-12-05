#include <stdio.h>
int main()
{  int a=2,b=2;
    int matrix[a][b];
    int count = 0;
    printf("enter elements");

    for (int i = 0; i <a ; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            count += matrix[i][j];
        }
    }
    printf("sum of 2d array is %d", count);

    return 0;
}