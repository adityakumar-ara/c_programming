
#include <stdio.h>
 int main(){
    int a[100],size,max;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&size);
    printf("enter your %d elements",size);
    for (int i = 0; i <size; i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
    for (int i = 0; i < size; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }
    
    printf("maximum nunber is %d",max);
    return 0;
 }