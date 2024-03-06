#include <iostream>
using namespace std;
int divideNum(int a, int b)
{
    return a/b;
}
int main()
{
    int a, b;
    cout << "Number one: ";
    cin >> a;
    cout << "Number two: ";
    cin >> b;
    cout<<divideNum(a,b);
    return 0;
}
