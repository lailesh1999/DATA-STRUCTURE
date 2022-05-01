#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE head;

void insert()
{
    NODE temp;
    temp = (NODE)malloc(sizeof(NODE));
    cout << "ENTER THE DATA";
    cin >> temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else if (temp->data >= head->data)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        NODE cur, prev;
        cur = head;
        while (cur != NULL && temp->data <= cur->data)
        {
            prev = cur;
            cur = cur->next;
        }
        temp->next = prev->next;
        prev->next = temp;
    }
}

void display()
{
    NODE temp;
    temp = head;
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
int main()
{
    int ch;
    while (true)
    {
        cout << " \n1:insert data:\t2.display \t 3.exit\n";
        cout << " Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        default:
            cout << "wrong choice";
        }
    }
}