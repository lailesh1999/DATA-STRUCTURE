#include "iostream"
using namespace std;
int a[10], N, front = 0, count = 0, item, rear = -1;

void insert_cirqueue()
{
    if (count >= N)
    {
        cout << "QUEUE IS FULL";
    }
    else
    {
        cout << "ENTER THE ELEMENT";
        cin >> item;
        rear = (rear + 1) % N;
        a[rear] = item;
        count = count + 1;
    }
}

void delete_cirqueue()
{
    if (count <= 0)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        item = a[front];
        cout << "DELETED ELEMENT:" << item;
        front = (front + 1) % N;
        count = count - 1;
    }
}
void display()
{
    if (count <= 0)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        int f1 = front;
        for (int i = 0; i < count; i++)
        {
            cout << a[f1] << "\n";
            f1 = (f1 + 1) % N;
        }
    }
}

int main()
{
    int ch;
    cout << "ENTER THE SIZE OF AN ARRAY";
    cin >> N;
    while (true)
    {
        cout << "\n 1.INSERT 2.DELETE 3.DISPLAY 4.EXIT\n";
        cout << "ENTER YOUR CHOICE::";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert_cirqueue();
            break;
        case 2:
            delete_cirqueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "invalis choice";
        }
    }
}