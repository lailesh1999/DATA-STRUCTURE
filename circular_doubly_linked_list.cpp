#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *right;
    struct node *left;
};
typedef struct node *NODE;
NODE head, last;

class circular_linked
{
public:
    void insertBeg()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER DATA";
        cin >> temp->data;

        if (head == NULL)
        {
            temp->right = temp->left = temp;
            head = last = temp;
        }
        else
        {
            temp->right = head;
            temp->left = last;
            head->left = last->right = temp;
            head = temp;
        }
    }

    void insertEnd()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER DATA";
        cin >> temp->data;
        if (head == NULL)
        {
            temp->left = temp->right = temp;
            head = last = temp;
        }
        else
        {
            last->right = temp;
            temp->left = last;
            temp->right = head;
            head->left = temp;
            last = temp;
        }
    }
    void delBeg()
    {
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        else if (head->right == head)
        {
            cout << "DELETED ELEMENT:" << head->data;
            free(head);
            head = NULL;
        }
        else
        {
            NODE temp;
            temp = head;
            cout << "DELETED ELEMENT:" << temp->data << "\n";
            head = temp->right;
            head->left = last;
            last->right = head;
            free(temp);
        }
    }

    void delEnd()
    {
        if (head == NULL)
        {
            cout << "EMPTY";
        }
        else if (head->right == head)
        {
            cout << "DELETED ELEMENT:" << head->data;
            free(head);
            head = NULL;
        }
        else
        {
            NODE temp;
            temp = last;
            last = temp->left;
            head->left = last;
            last->right = head;
            cout << "DELETED ELEMENT:" << temp->data;
            free(temp);
        }
    }

    void display()
    {

        if (head == NULL)
        {
            cout << "EMPTY" << endl;
        }
        else
        {
            NODE cur;
            cur = head;
            while (cur->right != head)
            {
                cout << cur->data << "\t";
                cur = cur->right;
            }
            cout << cur->data << endl;
        }
    }
};

int main()
{
    circular_linked db;
    int ch;
    while (true)
    {
        cout << " \n 1 INSERT BEG 2 INSERT AT END 3 DELETE BEG 4 DELETE AT END 5 DISPLAY 6EXIT \n";
        cout << "Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            db.insertBeg();
            break;
        case 2:
            db.insertEnd();
            break;
        case 3:
            db.delBeg();
            break;
        case 4:
            db.delEnd();
            break;
        case 5:
            db.display();
            break;
        case 6:
            exit(0);
        default:
            cout << "WRONG CHOICE";
        }
    }
}
