#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    printf("Enter Array size : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

      scanf("%d",&arr[i]);}
      int min=arr[0];
      for(i=1; i<n; i++)
         scanf("%d",&arr[i]);
      {  sum=sum+arr[i];
    {

        if(min>arr[i])
            min=arr[i];
    }

    }






    printf("Enter sum=%d",sum);

    printf("Enter minimam =%d",min);
}
