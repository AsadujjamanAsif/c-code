#include<stdio.h>
int main()
{
    int arr[100],sum=0,i,n;
    printf("Enter Array Size : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Enter Sum=%d",sum);
    printf("Enter Avarge=%d ",sum/n);
}
