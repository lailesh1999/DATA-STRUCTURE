#include <iostream>
using namespace std;
int main()
{
    int a[50], i, j, n, temp;
    cout << "ENTER THE SIZE OF THE ARRAY ELEMENT:";
    cin >> n;
    cout << "ENTER THE ELEMENT:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "BEFORE SORTING\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
    cout << "AFTER SORTING\n";
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
}