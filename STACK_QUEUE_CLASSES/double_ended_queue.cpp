using namespace std;
#include "iostream"
class double_ended
{
public:
    int front = 0, rear = -1, a[10], item, n;
    double_ended(int m)
    {
        n = m;
    }
    void insertREAR()
    {
        if (rear == n - 1 && front == 0)
        {
            cout << "QUEUE IS FULL";
        }
        else if (rear == n - 1)
        {
            cout << "OPERATION IS NOT POSSIBLE ";
        }
        else
        {
            cout << "enter the element";
            cin >> item;
            rear = rear + 1;
            a[rear] = item;
        }
    }

    void insertFRONT()
    {
        if (rear == n - 1 && front == 0)
        {
            cout << "QUEUE IS FULL";
        }
        else if (front == 0)
        {
            cout << "OPERATION IS NOT POSSIBLE ";
        }
        else
        {
            cout << "ENTER THE ELEMENT";
            cin >> item;
            front = front - 1;
            a[front] = item;
        }
    }

    void delFRONT()
    {
        if (front > rear || rear == -1)
        {
            cout << "STACK IS EMPTY";
        }
        else
        {
            item = a[front];
            cout << "DELETED ELEMENT IS " << item;
            front = front + 1;
        }
    }

    void delREAR()
    {
        if (front > rear || rear == -1)
        {
            cout << "EMPTY";
        }
        else
        {
            item = a[rear];
            cout << "DELETED ELEMENT IS " << item;
            rear = rear - 1;
        }
    }
    void display()
    {
        if (front > rear || rear == -1)
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
    double_ended q(size);
    while (true)
    {
        cout << " \n1. INSERT REAR \n 2.INSERT FRONT  \n 3. DELETE REAR  \n  4. DELETE FRONT   \n 5.DISPLAY \n 6.EXIT ";
        cout << " \nENTER YOUR CHOICE";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.insertREAR();
            break;
        case 2:
            q.insertFRONT();
            break;
        case 3:
            q.delREAR();
            break;
        case 4:
            q.delFRONT();
            break;
        case 5:
            q.display();
            break;
        case 6:
            exit(0);

        default:
            cout << "INVALID CHOICE";
            break;
        }
    }
}