#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temperature conversion menu\n :  ");
    printf("1. Fahrenheit to Celsius\n ");
    printf("2. Celsius to Fahrenheit\n ");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)

    {
    case 1:
    {
        printf("Enter the Fahrenheit Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (temp-32)/1.8;
        printf("The Temperature in Celsius : %f\n",convertedtemp);
        break;
    }
    case 2:
    {
        printf("Enter the Celsius Temperature : ");
        scanf("%f",&temp);
        convertedtemp = (1.8*temp)+32;
        printf("The Temperature in Fahrenheit : %f\n",convertedtemp);
    }
    default:
        printf("not correct option : ");

    }


}
