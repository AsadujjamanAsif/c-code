#include<stdio.h>
int main()
{
    char ch;
    printf("Enter latter  : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("capetal");
    else
    if(ch>='a' && ch<='z')
        printf("small");
}
