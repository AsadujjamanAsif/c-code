#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter any positive number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==2)
        {
            count++;
            break;
        }
    }
        if(count==0)
            printf("prime number");
        else
            printf("not prime number");
}

