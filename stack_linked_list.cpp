using namespace std;
#include <iostream>

struct node
{
    int data;
    struct node *next;
};

typedef struct node *NODE;
NODE top, head;
class stack
{
public:
    void push()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER THE DATA";
        cin >> temp->data;
        temp->next = NULL;
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (top == NULL)
            cout << "Stack Underflow" << endl;
        else
        {
            cout << "The popped element is " << top->data << endl;
            top = top->next;
        }
    }
    void display()
    {
        NODE temp;
        temp = top;
        if (temp == NULL)
        {
            cout << "EMPTY";
        }
        else
        {
            while (temp != NULL)
            {
                cout << temp->data << "\t";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    int ch;
    stack s;
    while (true)
    {
        cout << " \n1:PUSH:\t2.POP\t 3. DISPLAY \n 4.exit\n";
        cout << " Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s.push();
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "wrong choice";
        }
    }
}