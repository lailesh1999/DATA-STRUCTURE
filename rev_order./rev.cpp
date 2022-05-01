#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node *NODE;
NODE head;
class reverse
{
public:
    void insertBeg()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER THE VARIABLE";
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void insertEnd()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER THE VARIABLE";
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            NODE cur;
            cur = head;
            while (cur->next != NULL)
            {
                cur = cur->next;
            }
            cur->next = temp;
        }
    }
    void revrse()
    {
        if (head == NULL)
        {
            cout << "EMPTY LIST CANNOT BE REVERSED";
        }
        else if (head->next == NULL)
        {
            cout << "SINGLE ELEMENT CANNOT VE REVERSED";
        }
        else
        {
            NODE prev_node, cur_node, next_node;
            prev_node = NULL;
            cur_node = next_node = head;
            while (cur_node)
            {
                next_node = next_node->next;
                cur_node->next = prev_node;
                prev_node = cur_node;
                cur_node = next_node;
            }
            head = prev_node;
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
};

int main()
{
    int ch;
    reverse rs;
    while (true)
    {
        cout << " \n1:insert front:\t2.insert from end\t 3. REVERSE \t4.display\t5.exit\n";
        cout << " Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            rs.insertBeg();
            break;
        case 2:
            rs.insertEnd();
            break;
        case 3:
            rs.revrse();
            break;
        case 4:
            rs.display();
            break;
        case 5:
            exit(0);
        default:
            cout << "wrong choice";
        }
    }
}