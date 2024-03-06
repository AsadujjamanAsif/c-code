#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Even");
    else if(num%2!=0)
        printf("Odd");
}
