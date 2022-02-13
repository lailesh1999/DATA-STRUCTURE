using namespace std;
#include "iostream"

struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE head;
class linked
{
public:
    void insertBeg()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "Enter the variable ";
        cin >> temp->data;
        temp->next = NULL;
        if (head != NULL)
        {
            temp->next = head;
        }
        head = temp;
    }

    void inserEnd()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        NODE cur;
        cout << "Enter the variable";
        cin >> temp->data;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            cur = head;
            while (cur->next != NULL)
            {
                cur = cur->next;
            }
            cur->next = temp;
        }
    }

    void inputLoc()
    {
        NODE temp;
        int loc;
        temp = (NODE)malloc(sizeof(NODE));
        NODE cur;
        cout << "Enter the variable name";
        cin >> temp->data;
        temp->next = NULL;
        cout << "Enter the location";
        cin >> loc;
        if (loc == 1 && head == NULL)
        {
            head = temp;
        }
        else if (head == NULL && loc > 1)
        {
            cout << "location does not exits";
        }
        else if (loc == 1)
        {
            temp->next = head;
            head = temp;
        }
        else if (loc > 1)
        {
            cur = head;
            for (int i = 1; i < loc - 1; i++)
            {
                cur = cur->next;
                if (cur == NULL)
                {
                    cout << "location does not extis";
                    return;
                }
            }
            temp->next = cur->next;
            cur->next = temp;
        }
        else
        {
            cout << "error";
        }
    }

    void delBeg()
    {
        if (head == NULL)
        {
            cout << "Empty";
        }
        else
        {
            NODE temp;
            temp = head;
            head = head->next;
            cout << temp->data << "DELETED";
            free(temp);
        }
    }
    void delEnd()
    {
        if (head == NULL)
        {
            cout << "Empty";
        }
        else if (head->next == NULL)
        {
            cout << head->data << "DELETED";
            free(head);
            head = NULL;
        }
        else
        {
            NODE cur, prev;
            cur = head;
            while (cur->next != NULL)
            {
                prev = cur;
                cur = cur->next;
            }
            prev->next = NULL;
            cout << cur->data << "DELETED";
            free(cur);
        }
    }

    void delLoc()
    {
        if (head == NULL)
        {
            cout << "Empty";
        }
        else
        {
            int loc;
            cout << "Enter the location";
            cin >> loc;
            if (head->next == NULL && loc == 1)
            {
                cout << head->data << "DELETED";
                free(head);
                head = NULL;
            }
            else if (head == NULL || loc < 1)
            {
                cout << "location does not exits";
            }
            else if (loc == 1)
            {
                NODE temp;
                temp = head;
                cout << temp->data << "DELETED";
                head = head->next;
                free(temp);
            }
            else
            {
                NODE cur, prev;
                cur = head;
                for (int i = 1; i < loc; i++)
                {
                    prev = cur;
                    cur = cur->next;
                    if (cur == NULL)
                    {
                        cout << "location does not exits";
                        return;
                    }
                }
                prev->next = cur->next;
                cout << cur->data << "deleted";
                free(cur);
            }
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
                cout << temp->data << "->";
                temp = temp->next;
            }
        }
    }
};

int main()
{
    linked ls;
    int ch;

    while (true)
    {
        cout << " \n1:insert front:\n2.insert from end\n3.insert into location\n4.delete begin\n5. delete at END\n6.Delete at LOCATION \n7.display\n8.exit\n";
        cout << "\n Enter your choice: \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ls.insertBeg();
            break;
        case 2:
            ls.inserEnd();
            break;
        case 3:
            ls.inputLoc();
            break;
        case 4:
            ls.delBeg();
            break;
        case 5:
            ls.delEnd();
            break;
        case 6:
            ls.delLoc();
            break;
        case 7:
            ls.display();
            break;
        case 8:
            exit(0);
        default:
            cout << "wrong choice";
        }
    }
}