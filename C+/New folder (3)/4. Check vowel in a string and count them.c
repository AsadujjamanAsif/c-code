// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[200];
    int x, sum = 0, a = 0, e = 0, i = 0, o = 0, u = 0;
    gets(arr);
    for (x = 0; x < strlen(arr); x++)
    {
        char lows = tolower(arr[x]);
        if (lows == 'a' || lows == 'e' || lows == 'i' || lows == 'o' || lows == 'u')
        {
            sum++;
        }
        switch (lows)
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }
    printf("total vowel: %d\n", sum);
    printf("total a: %d\ntotal e: %d\ntotal i: %d\ntotal o: %d\ntotal u: %d\n", a, e, i, o, u);

    return 0;
}