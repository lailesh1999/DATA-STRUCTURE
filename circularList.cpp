#include "iostream"
using namespace std;
struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE head, last;
class circular
{
public:
    void insertBeg()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "Enter the variable";
        cin >> temp->data;
        if (head == NULL)
        {
            head = temp;
            head->next = head;
            last = head;
        }
        else
        {
            last->next = temp;
            temp->next = head;
            head = temp;
        }
    }
    void insertEnd()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "Enter the variable ";
        cin >> temp->data;
        if (head == NULL)
        {
            head = temp;
            head->next = head;
            last = head;
        }
        else
        {
            last->next = temp;
            temp->next = head;
            last = temp;
        }
    }

    void delBeg()
    {
        NODE temp;
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        else if (head->next == head)
        {
            cout << head->data << "DELETED";
            free(head);
            head = NULL;
        }
        else
        {
            temp = head;
            cout << head->data << "DELETED";
            head = head->next;
            last->next = head;
            free(temp);
        }
    }

    void delEnd()
    {
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        else if (head->next == head)
        {
            cout << head->data << "DELETE";
            free(head);
            head = NULL;
        }
        else
        {
            NODE cur;
            cur = head;
            while (cur->next != last)
            {
                cur = cur->next;
            }
            cout << last->data << "deleted";
            free(last);
            last = cur;
            last->next = head;
        }
    }
    void display()
    {

        NODE temp;
        temp = head;
        if (head == NULL)
        {
            cout << "Empty";
        }
        else
        {
            while (temp->next != head)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << temp->data << endl;
        }
    }
};
int main()
{
    circular cs;
    int ch;
    while (true)
    {
        cout << "\n 1.INSERTBEG 2.insertEND 3.DELBEG 4.DELEND 5.DISPALY 6.EXIT ";
        cout << "Enter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cs.insertBeg();
            break;
        case 2:
            cs.insertEnd();
            break;
        case 3:
            cs.delBeg();
            break;
        case 4:
            cs.delEnd();
            break;
        case 5:
            cs.display();
            break;
        case 6:
            exit(0);
        default:
            cout << "INVALID CHOICE";
        }
    }
}
