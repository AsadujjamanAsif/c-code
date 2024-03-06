#include<stdio.h>
int main()
{
    int num[]={34,54,33,23,21,3,34,32};
   // printf("Enter any number : ");
    //scanf("%d",&n);
    int value,pos=-1,i;
    printf("Enter the value search :");
    scanf("%d",&value);
    for(i=0; i<9; i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break ;
        }
    }
    {
        if(pos==-1)
        {
            printf("it is not found");
        }
        else printf("It is found");
    }

}
