#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() != 13)
    {
        cout << "no" << endl;
        return 0;
    }
    else
    {
        for (char c : s)
        {
            if (c < '0' || c > '9')
            {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}