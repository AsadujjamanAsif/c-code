#include <bits/stdc++.h>
using namespace std;
int main()
{
int la[] = {1,2,3,4,5};
int size = sizeof(la) / sizeof(la[0]);
int j, index = 2, item = la[2];
j = index;
while (j < size)
{
la[j] = la[j + 1];
j++;
}
size -= 1;
for (int i = 0; i < size; i++)
{
cout << la[i];
}
return 0;
}
