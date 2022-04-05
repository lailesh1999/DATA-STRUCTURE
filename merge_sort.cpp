#include <iostream>
using namespace std;

void merge(int a[], int lb, int mid, int ub)
{
    int i, j, k, b[50];
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    while (j <= ub)
    {
        b[k] = a[j];
        j++, k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++, j++;
    }

    for (k = lb; k <= ub; k++)
    {
        a[k] = b[k];
    }
}

void merge_sort(int a[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, lb);
        merge(a, lb, mid, ub);
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
    merge_sort(a, 0, n - 1);
    cout << "AFTER SORTING \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}