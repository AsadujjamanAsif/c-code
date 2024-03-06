#include <stdio.h>
int myFunc(int number)
{
    int sum = 0, count = 0;
    for (int i = 1; count < number; i += 2)
    {
        sum += i;
        count++;
    }
    float average = sum / count;
    printf("sum is: %d\naverage: %.2f\n", sum, average);
};
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    myFunc(number);
    return 0;
}
