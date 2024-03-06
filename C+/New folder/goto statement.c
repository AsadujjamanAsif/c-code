#include<stdio.h>
int main()
{
    int i=1;

 print:
     printf("%d\t",i);
     i++;
     if(i<9)
        goto print;
}
