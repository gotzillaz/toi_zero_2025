#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    switch (s[0])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "yes" << endl;
        break;
    default:
        cout << "no" << endl;
        break;
    }
    return 0;
}