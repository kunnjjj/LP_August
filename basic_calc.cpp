
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    // '+'
    while (true)
    {
        if (ch == 'X' || ch == 'x')
        {
            break;
        }
        if (ch == '+')
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << n1 + n2 << endl;
        }
        else if (ch == '-')
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << n1 - n2 << endl;
        }
        else if (ch == '*')
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << n1 * n2 << endl;
        }
        else if (ch == '/')
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << n1 / n2 << endl;
        }
        else if (ch == '%')
        {
            int n1, n2;
            cin >> n1 >> n2;
            cout << n1 % n2 << endl;
        }
        else
        {
            cout << "Invalid operation. Try again." << endl;
        }
        cin >> ch;
    }
    return 0;
}