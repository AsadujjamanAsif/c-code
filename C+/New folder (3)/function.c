#include<stdio.h>
int sum(int a,int b)
{
   // return a+b;
   printf("Enter Sum=%d\n",a+b);
}
int sub(int a,int b)
{
    printf("Enter sub=%d\n",a-b);
}
int main()
{
 //   printf("Enter Sum=%d\n",sum(36,2));
  //  printf("Enter Sum=%d\n",sum(34,53));
  sum(23,42);
  sum(2,3);
  sub(23,43);
}
