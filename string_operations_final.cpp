#include "iostream"
using namespace std;
char str1[100];
char str2[100];
int i;

int count_str(char str[])
{
    int c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c = c + 1;
    }
    return c;
}
void reverse_str()
{
    cout << "ENTER THE STRING:";
    cin >> str1;
    int count = count_str(str1);
    for (i = count; i >= 0; i--)
    {
        cout << str1[i];
    }
}

void con()
{
    cout << "Enter the string1: ";
    cin >> str1;
    cout << "Enter the string2:";
    cin >> str2;
    int ca = count_str(str1);

    for (int j = 0; str2[j] != '\0'; j++)
    {
        str1[ca++] = str2[j];
    }
    cout << "AFTER CONCATINATION:" << str1;
}

void sub_string()
{
    int m, n;
    cout << "Enter the string1:";
    cin >> str1;
    cout << "Enter the range of substring:";
    cin >> m >> n;
    int c = count_str(str1);
    if (m < n && c >= n)
    {
        for (int i = m; i < n; i++)
        {
            cout << str1[i];
        }
    }
    else
    {
        cout << "ERROR";
    }
}
void compare_string()
{
    int flag = 0;
    cout << "Enter the string 1:";
    cin >> str1;
    cout << "Enter the string 2:";
    cin >> str2;
    i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
        }
        i++;
    }
    if (flag == 1)
    {
        cout << " NOT EQUAL";
    }
    else
    {
        cout << "EQUAL";
    }
}

int main()
{
    int ch;
    while (true)
    {
        cout << "\n 1.REVERSE 2.CONCATINATION 3.COMAPRE 4.SUB STRING 5.EXIT\n";
        cout << "\nEnter yout choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            reverse_str();
            break;
        case 2:
            con();
            break;
        case 3:
            compare_string();
            break;
        case 4:
            sub_string();
            break;
        case 5:
            exit(0);
        default:
            cout << "WRONG CHOICE";
        }
    }
}