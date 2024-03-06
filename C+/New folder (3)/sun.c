#include<stdio.h>
int main()
{
    int num1,num2;
    int sum;
    printf("Enter any number : ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("Sum=%d\n",sum);
    float avg=(num1+num2)/2;
    printf("avg=%f\n",avg);
    int mul=num1*num2;
    printf("mul=%d\n",mul);
    int rem=num1%num2;
    printf("rem=%d",rem);
}
