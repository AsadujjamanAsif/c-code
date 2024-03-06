#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt (s*(a-s)*(s-b)*(s-c));
    printf("S=%.3f\n area=%.3f",s,area);
}
