#include "iostream"
using namespace std;
class queue
{

public:
    int front = 0;
    int rear = -1, a[10], item, n;
    queue(int m)
    {
        n = m;
    }
    void insert()
    {
        if (rear == n - 1)
        {
            cout << "QUEUE IS FULL";
        }
        else
        {
            cout << "ENTER THE ELEMENT";
            cin >> item;
            rear = rear + 1;

            a[rear] = item;
        }
    }

    void delet()
    {
        if (front > rear)
        {
            cout << "EMPTY";
        }
        else
        {
            item = a[front];
            cout << "DELETED ELEMENT" << item << "\n";
            front = front + 1;
        }
    }

    void display()
    {
        if (front > rear)
        {
            cout << "EMPTY";
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << a[i] << "\t";
            }
        }
    }
};

int main()
{
    int ch, size;
    cout << " \nENTER THE SIZE OF QUEUE";
    cin >> size;
    queue q(size);
    while (true)
    {
        cout << " \n1. INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT ";
        cout << " \nENTER YOUR CHOICE";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.insert();
            break;
        case 2:
            q.delet();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);

        default:
            cout << "INVALID CHOICE";
            break;
        }
    }
}