#include <stdio.h>
int main()
{
    printf("enter last 3 digits of id: ");
    int number, sum = 0;
    scanf("%d", &number);
    printf("Prime Numbers: ");
    for (int i = 2; i <= number; i++)
    {
        int check = 1;
        for (int x = 2; x < i; x++)
        {
            if (i % x == 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\ntotal sum of prime number 1 to between my id %d:  %d\n", number, sum);
    return 0;
}
