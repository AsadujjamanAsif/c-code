// In the name of Allah, the most gracious, the most merciful
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter size: ";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "target item: ";
    int target;
    cin >> target;
    int left = 0;
    int right = size - 1;
    bool dis = false;
    int index = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            dis = true;
            index = mid;
            break;
        }
        if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    if (dis == true)
    {
        cout << "Element is found! Index is: " << index << "\n";
    }
    else
        cout << "Element not found!";

    return 0;
}
