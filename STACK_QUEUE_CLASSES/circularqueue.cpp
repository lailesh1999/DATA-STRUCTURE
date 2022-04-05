#include "iostream"
using namespace std;
class circular_queue
{
public:
    int count = 0, front = 0, rear = -1, n, item, a[10];
    circular_queue(int m)
    {
        n = m;
    }

    void insert()
    {
        if (count >= n)
        {
            cout << "CIRCULAT QUEUE IS FULL";
        }
        else
        {
            cout << "ENTER THE ELEMENT";
            cin >> item;
            rear = (rear + 1) % n;
            a[rear] = item;
            count = count + 1;
        }
    }
    void delete1()
    {
        if (count <= 0)
        {
            cout << "Queue is empty";
        }
        else
        {
            item = a[front];
            cout << "DELETED ELEMENT" << item;
            front = (front + 1) % n;
            count = count - 1;
        }
    }
    void display()
    {
        if (count <= 0)
        {
            cout << "Queue is empty";
        }
        else
        {
            int f = front;
            for (int i = front; i < count; i++)
            {
                cout << a[f] << "\t";
                f = (f + 1) % n;
            }
        }
    }
};
int main()
{
    int ch, size;
    cout << " \nENTER THE SIZE OF QUEUE";
    cin >> size;
    circular_queue q(size);
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
            q.delete1();
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