// In the name of Allah, the most gracious, the most merciful
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter number: ";
    int n;
    cin >> n;
    if (n < 2)
        cout << "this is not prime number \n";
    else if (n == 2 || n == 3)
        cout << "this is prime number \n";
    else
    {
        bool prime = true;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
            cout << "this is prime number \n";
        else
            cout << "this is not prime number \n";
    }
    return 0;
}
