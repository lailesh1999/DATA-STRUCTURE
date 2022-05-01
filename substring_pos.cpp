#include <iostream>
using namespace std;
int main()
{
    string str;
    string substr;
    cout << "ENTER THE STRING ";
    cin >> str;
    cout << "Enter the substring to find postion \n";
    cin >> substr;
    int index = str.find(substr);
    if (index == -1)
    {
        cout << "SUB STRING POSITION NOT FOUND";
    }
    else
    {
        cout << "SUB STRING IS FOUND AT POS:" << index;
    }
}