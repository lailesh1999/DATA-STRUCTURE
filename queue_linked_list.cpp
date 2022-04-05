#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node *NODE;
NODE front, rear;
class queue
{
public:
    void insertQueue()
    {
        NODE temp;
        temp = (NODE)malloc(sizeof(NODE));
        cout << "ENTER THE DATA";
        cin >> temp->data;
        temp->next = NULL;
        if (rear == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }

    void delQueue()
    {
        if (front == NULL)
        {
            cout << "EMPTY";
        }
        else
        {
            NODE temp;
            temp = front;
            front = front->next;
            cout << "DELETED ELEMENT:" << temp->data;
            free(temp);
            if (front == NULL)
            {
                rear = NULL;
            }
        }
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "EMPTY";
        }
        else
        {
            NODE temp;
            temp = front;
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
    queue q;
    while (true)
    {
        cout << " \n1:INSERT:\t2.DELETE\t 3. DISPLAY \t 4.exit\t";
        cout << " Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.insertQueue();
            break;
        case 2:
            q.delQueue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "wrong choice";
        }
    }
}