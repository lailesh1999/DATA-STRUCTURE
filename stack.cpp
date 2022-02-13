#include "iostream"
using namespace std;
int a[10], top = -1, n, item;

void push()
{
    if (top == n - 1)
    {
        cout << "Stack is full \n";
    }
    else
    {
        cout << "Enter the data:";
        cin >> item;
        top = top + 1;
        a[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack empty";
    }
    else
    {

        item = a[top];
        cout << "DELETED ELEMENT :" << item;
        top = top - 1;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty";
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << "\n";
        }
    }
}
int main()
{
    int ch;
    cout << "ENTER THE SIZE OF ARRAY";
    cin >> n;
    while (true)
    {

        cout << " \n1.push   2.pop 3.display 4.EXIT\n";
        cout << "enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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