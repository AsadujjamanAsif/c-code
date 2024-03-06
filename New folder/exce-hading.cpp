#include <iostream>
using namespace std;

int divide_numbers(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{
    int a, b;
    cout << "One: ";
    cin >> a;
    cout << "Two: ";
    cin >> b;
    try {
        cout << divide_numbers(a, b);
    }
    catch(int  code) {
        cout << "ERROR CODE: " << code;
    }
    //Continue doing whatever afterwards like normal
    return 0;
}
