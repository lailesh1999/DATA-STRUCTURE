#include <iostream>
using namespace std;

int partition(int a[], int lb, int ub)
{
    int pivot, start, end, temp;
    pivot = a[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
        {
            start++;
        }
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }

    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;

    return end;
}

void quick_sort(int a[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(a, lb, ub);
        quick_sort(a, lb, loc - 1);
        quick_sort(a, loc + 1, ub);
    }
}

int main()
{
    int a[50], n, i;
    cout << "ENTER THE NUMBER OF ELEMENTS:";
    cin >> n;
    cout << "ENTER THE ELEMENT\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "======BEFORE SORTING========== \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n";
    quick_sort(a, 0, n - 1);

    cout << "=======AFTER SORTING==========\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}