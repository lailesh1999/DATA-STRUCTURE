#include <iostream>
using namespace std;
int main()
{
    int n, i, j, a[20], search, mid, high, low;
    int temp = 0;
    cout << "ENTER THE SIZE OF ARRAY ELEMENT:";
    cin >> n;
    cout << "ENTER THE ELEMENT:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "ELEMENT IN ARRAY\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
    cout << "ENTER ELEMENT TO SEARCH:";
    cin >> search;
    high = n - 1;
    low = 0;
    mid = (high + low) / 2;
    while (low <= high)
    {
        if (a[mid] > search)
        {

            high = mid - 1;
        }
        else if (a[mid] == search)
        {
            cout << "ELEMENT IS FOUND AT LOCATION: " << mid + 1;
            break;
        }
        else
        {
            low = mid + 1;
        }
        mid = (high + low) / 2;
    }
    if (low > high)
    {
        cout << "ELEMENT IS NOT FOUND";
    }
}