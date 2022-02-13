#include "iostream"
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node *NODE;
NODE head;
class doubleLink
{
public:
    void insertBegin()
    {

        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "Enter the data";
        cin >> temp->data;
        temp->left = temp->right = NULL;
        if (head != NULL)
        {
            temp->right = head;
            head->left = temp;
        }
        head = temp;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "empty";
        }
        else
        {
            NODE cur;
            cur = head;
            while (cur)
            {
                cout << cur->data << "->";
                cur = cur->right;
            }
        }
    }

    void insertEnd()
    {
        NODE temp, cur;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "Enter the variable";
        cin >> temp->data;
        temp->left = temp->right = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            cur = head;
            while (cur->right != NULL)
            {
                cur = cur->right;
            }
            cur->right = temp;
            temp->left = cur;
        }
    }

    void delBeg()
    {

        if (head == NULL)
        {
            cout << "empty";
        }
        else if (head->right == NULL)
        {
            cout << head->data << "DELETED";
            free(head);
            head = NULL;
        }
        else
        {
            NODE temp;
            temp = head;
            head = head->right;
            head->left = NULL;
            cout << temp->data << "DELETED";
            free(temp);
        }
    }

    void delEnd()
    {
        NODE temp, prev;
        if (head == NULL)
        {
            cout << "Empty";
        }
        else if (head->right == NULL)
        {
            cout << head->data << "DELETED";
            free(head);
            head = NULL;
        }
        else
        {
            temp = head;
            while (temp->right != NULL)
            {
                prev = temp;
                temp = temp->right;
            }
            cout << temp->data << "Deleted";
            prev->right = NULL;
            free(temp);
        }
    }
};
int main()
{
    int ch;
    doubleLink dl;
    while (true)
    {
        cout << "\n1.insertBeg 2.insertEND 3.DELETE BEGIN 4.DELETE END 5.display 6.exit \n";
        cout << " \n Enter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            dl.insertBegin();
            break;
        case 2:
            dl.insertEnd();
            break;
        case 3:
            dl.delBeg();
            break;
        case 4:
            dl.delEnd();
            break;
        case 5:
            dl.display();
            break;
        case 6:
            exit(0);
        default:
            cout << "INVALID CHOICE";
        }
    }
}
