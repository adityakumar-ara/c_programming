#include<stdio.h>
int main()
{
 int s1,s2,s3,sum,ave;
//  float p;
 printf("enter your fierst sub.marks hindi english:");
 
 scanf("%d%d%d",&s1,&s2,&s3);
//  printf("enter your secound sub.marks:");
//  scanf("%d",&s2);
//  printf("enter your third sub.marks:");
//  scanf("%d",&s3);
 sum=s1+s2+s3;
 float p=(sum/300.0)*100;
 ave=sum/3;
     printf("your totle marks is %d \n",sum);
     printf("percentage is:%f\n",p);
     printf("Average marks is %d",ave);

    return 0;
}
