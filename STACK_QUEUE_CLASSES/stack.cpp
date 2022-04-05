#include "iostream"
using namespace std;

class stack
{
public:
    int a[10], top = -1, n, item;
    stack(int m)
    {
        n = m;
    }
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
};
int main()
{
    int ch, n;
    cout << "ENTER THE SIZE OF ARRAY";
    cin >> n;
    stack st(n);
    while (true)
    {

        cout << " \n1.push   2.pop 3.display 4.EXIT\n";
        cout << "enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "INVALID CHOICE";
        }
    }
}