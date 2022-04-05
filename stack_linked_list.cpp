#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE head, top;
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
        if (top == NULL)
        {
            top = head = temp;
        }
        else
        {
            top->next = temp;
            top = temp;
        }
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "EMPTY";
        }
        else if (top == head)
        {
            cout << "DELETED ELELEMENT:" << top->data;
            free(top);
            head = top = NULL;
        }
        else
        {
            NODE cur;
            cur = head;
            while (cur->next != top)
            {
                cout << cur->data;
                cur = cur->next;
            }
            cout << "DELETED ELEMENT :" << top->data;
            cur->next = NULL;
            free(top);
            top = cur;
        }
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        else
        {
            NODE temp;
            temp = head;
            while (temp != NULL)
            {
                cout << temp->data << "->";
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
        cout << " \n1:PUSH:\t2.POP\t 3. DISPLAY \t 4.exit\t";
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
