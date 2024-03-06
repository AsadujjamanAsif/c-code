// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    printf("enter your name: ");
    char name[100];
    gets(name);
    for (int i = 0; i < strlen(name) - 1; i++)
    {
        for (int x = i + 1; x < strlen(name); x++)
        {
            if (name[i] > name[x])
            {
                name[i] = name[i] + name[x];
                name[x] = name[i] - name[x];
                name[i] = name[i] - name[x];
            }
        }
    }
    printf("after sorting: %s", name);

    return 0;
}
