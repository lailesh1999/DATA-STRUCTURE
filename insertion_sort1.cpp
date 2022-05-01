#include <iostream>
using namespace std;

void insertion(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{

    int a[50], n, i;
    cout << "ENTER THE SIZE OF ARRAY ELEMENT:";
    cin >> n;
    cout << "ENTER THE ELEMENT\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "BEFORE SORTING \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
    insertion(a, n);
    cout << "AFTER SORTING \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}