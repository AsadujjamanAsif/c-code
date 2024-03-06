#include<stdio.h>
int main()
{
    float bdt,rem,rate;
    int usd;
    printf("Enter in bdt : ");
    scanf("%f",&bdt);
    printf("dollar rate : ");
    usd=bdt/rate;
    rem=bdt-(usd*rate);
    printf("usd : %d, rem now : %f",usd,rem);
}
