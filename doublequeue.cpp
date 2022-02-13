#include "iostream"
using namespace std;

int front = 0, rear = -1, item, q[10], N;
void insertRear()
{
    if (rear == N - 1 && front == 0)
    {
        cout << "QUEUE IS FULL";
        return;
    }
    if (rear == N - 1)
    {
        cout << "INSERTION FROM  REAR IS NOT POSSIBLE";
    }
    else
    {
        cout << "Enter the Element: ";
        cin >> item;
        rear = rear + 1;
        q[rear] = item;
    }
}

void insertFront()
{
    if (rear == N - 1 && front == 0)
    {
        cout << "QUEUE IS FULL";
        return;
    }
    if (front == 0)
    {
        cout << "INSERTION FROM FRONT IS NOT POSSIBLE";
    }
    else
    {
        cout << "ENTER THE ELEMENT";
        cin >> item;
        front = front - 1;
        q[front] = item;
    }
}

void deleteREAR()
{
    if (front > rear || rear == -1)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        item = q[rear];
        cout << "DELETED ELEMENT:" << item;
        rear = rear - 1;
    }
}

void deleteFront()
{
    if (front > rear || rear == -1)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        item = q[front];
        cout << "DELETED ELEMENT" << item;
        front = front + 1;
    }
}
void display()
{
    if (front > rear || rear == -1)
    {
        cout << "QUEUE IS EMPTY";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << q[i] << "\n";
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
        cout << " \n 1.INSERT FRONT 2.INSERT REAR 3. DELETE FRONT 4. DELETE REAR 5.DISPLAY 6.EXIT \n";
        cout << "ENTER CHOICE";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insertFront();
            break;
        case 2:
            insertRear();
            break;
        case 3:
            deleteFront();
            break;
        case 4:
            deleteREAR();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            cout << "INVALID CHOICE";
        }
    }
}