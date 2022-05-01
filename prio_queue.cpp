#include "iostream"
using namespace std;
class queue
{

public:
    int rear = -1, a[10], item, n;
    queue(int m)
    {
        n = m;
    }
    void insert()
    {
        if (rear == (n - 1))
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
        if (rear == -1)
        {
            cout << "EMPTY";
        }
        else
        {
            int idx = 0;
            int min_ele = a[0];

            for (int i = 0; i <= rear; i++)
            {
                if (a[i] < min_ele)
                {
                    min_ele = a[i];
                    idx = i;
                }
            }

            cout << "DELETED ELEMENT  :" << min_ele;
            for (int i = idx; i < rear; i++)
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
};

int main()
{
    int ch, size;
    cout << " \nENTER THE SIZE OF QUEUE";
    cin >> size;
    queue q(size);

    cout << " \n1. INSERT \n 2.DELETE \n 3.DISPLAY \n 4.EXIT ";
    while (true)
    {
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