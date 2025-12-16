 #include<stdio.h>
 struct student
 {
    char name[25];
    int age;
    int roll_nu;
    int roll_co;
    int marks;
 };
 int main()
   {
     struct student a={"aditya",25,250110411,766444,450};
   //   printf("%s\t%d\t%d\t%d\t%d\t",a.name,a.age,a.roll_nu,a.roll_co,a.marks);
   printf("name:%s\n",a.name);    
   printf("name:%d\n",a.age);    
   printf("name:%d\n",a.roll_nu);    
   printf("name:%d\n",a.roll_co);    
   printf("name:%d\n",a.marks);    
    return 0;
   }