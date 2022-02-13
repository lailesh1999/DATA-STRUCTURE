#include "iostream"
using namespace std;
int main()
{
    int a[20][20], b[10][20], m, n, i, j;
    cout << "ENTER THE NUMBER OF ROWS";
    cin >> m;
    cout << "Enter the number of columns";
    cin >> n;
    cout << "ENTER THE ELEMENTS IN TO ARRAY";
    int count = 0, digits = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 0)
            {
                count++;
            }
            else
            {
                digits++;
            }
        }
    }
    cout << "\n NUMBERS OF ELEMENTS:" << digits;
    cout << "\n NUMBER OF NON ZERO ELEMENTS :" << count;
    cout << "\nDISPLAY MATRIX: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    int k = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
    }
    cout << "\n THREE COLUMN REP:\n";
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    if (count > (m * n) / 2)
    {
        cout << " \nMATRIX IS SPARSE MATRIX";
    }
    else
    {
        cout << "\n NOT A SPARSE MATRIX";
    }
}