#include<stdio.h>
int main()
{
    int i,n;
    int valu=0;
    printf("Enter an number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        valu=i*i-i+1;
        printf("%d ", valu);
    }
    printf("\n");
}
