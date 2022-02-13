#include <iostream>

using namespace std;
char str1[50];
int i;
void getStr()
{

    cout << "Enter the string 1";
    cin >> str1;
}

int count(char str[])
{
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

void string_reverse()
{
    getStr();

    for (i = count(str1); i >= 0; i--)
    {
        cout << str1[i];
    }
}
void string_concat()
{
    getStr();
    char str2[25];
    cout << "Enter the string 2";
    cin >> str2;
    i = count(str1);
    for (int j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
    cout << "after concat of two string " << str1;
}
//

void compare_two_string()
{
    char str2[20];
    int flag;
    cout << "Enter the string 1 ";
    cin >> str1;
    cout << "Enter the string 2 ";
    cin >> str2;
    int cmp_str(char[], char[]);
    flag = cmp_str(str1, str2);

    if (flag == 0)
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << "Strings are not equal";
    }
}
int cmp_str(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void sub_string()
{
    getStr();
    int a, b;
    int ct = count(str1);
    cout << "Enter the range of the substring";
    cin >> a >> b;
    if (a < b && ct >= b)
    {
        for (int i = a; i < b; i++)
        {
            cout << str1[i];
        }
    }
    else
    {
        cout << "ERROR!!";
    }
}
int main()
{
    int ch;
    while (true)
    {
        cout << "  \n 1:Reverse 2:ConCat 3:Compare 4:SubStr 5:Exit \n";
        cout << "\n Enter the choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            string_reverse();
            break;
        case 2:
            string_concat();
            break;
        case 3:
            compare_two_string();
            break;
        case 4:
            sub_string();
            break;
        case 5:
            exit(0);
        default:
            cout << "Wrong choice";
        }
    }
}