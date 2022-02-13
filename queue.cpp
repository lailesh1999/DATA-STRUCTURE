#include "iostream"
using namespace std;

int rear = -1, front = 0, a[10], n, item, i;

void insert_queue()
{
    if (rear == (n - 1))
    {
        cout << "QUEUE IS FULL";
    }
    else
    {
        cout << "Enter the element:";
        cin >> item;
        rear = rear + 1;
        a[rear] = item;
    }
}

void delete_queue()
{
    if (front > rear)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {

        item = a[front];
        cout << "DELETED ELEMENT::" << item;
        front = front + 1;
    }
}

void display()
{
    if (front > rear)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            cout << a[i] << "\n";
        }
    }
}

int main()
{
    int ch;
    cout << "ENTER THE SIZE OF AN ARRAY";
    cin >> n;
    while (true)
    {
        cout << "\n1.INSERT 2.DELETE 3.DISPLAY 4.EXIT\n";
        cout << "Enter the choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert_queue();
            break;
        case 2:
            delete_queue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "INVALID CHOICE";
        }
    }
}