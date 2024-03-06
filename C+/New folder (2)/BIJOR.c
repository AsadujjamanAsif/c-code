#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
        sum=sum+i*i;
    }
    printf("=%d\n",sum);
}

