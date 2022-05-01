#include <iostream>
using namespace std;
int rear = -1, a[20], n, item, i;

void insert1()
{
    if (rear == (n - 1))
    {
        cout << "QUEUE IS FULL";
    }
    else
    {
        cout << "ENTER DATA";
        cin >> item;
        rear = rear + 1;
        a[rear] = item;
    }
}

void delete1()
{
    if (rear == -1)
    {
        cout << "EMPTY";
    }
    else
    {
        int idx;
        int max_ele = a[0];
        for (int i = 0; i <= rear; i++)
        {
            if (a[i] > max_ele)
            {
                max_ele = a[i];
                idx = i;
            }
        }

        cout << "DELETED ELEMENT :" << max_ele;

        for (i = idx; i < rear; i++)
        {
            a[i] = a[i + 1];
        }
        rear = rear - 1;
    }
}

void display()
{
    if (rear == -1)
    {
        cout << "EMPTY";
    }
    else
    {
        for (int i = 0; i <= rear; i++)
        {
            cout << a[i] << "\t";
        }
    }
}

int main()
{
    int ch;
    cout << " \nENTER THE SIZE OF QUEUE";
    cin >> n;

    cout << " \n1. INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT ";
    while (true)
    {
        cout << " \nENTER YOUR CHOICE";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert1();
            break;
        case 2:
            delete1();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            cout << "INVALID CHOICE";
            break;
        }
    }
}