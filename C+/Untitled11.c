//Wride a program that calcultes the area of a triangle
#include<stdio.h>
int main()
{
    float base, height, area;
    printf("Base = ");
    scanf("%f",&base);
    printf("Height = ");
    scanf("%f",&height);
    area=(float)1/2*base*height;
    printf("area=%.2f\n",area);
}
