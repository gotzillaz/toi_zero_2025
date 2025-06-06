#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    if (s.compare("H") == 0 && n == 4567)
    {
        cout << "safe unlocked" << endl;
    }
    else if (s.compare("H") == 0 && n != 4567)
    {
        cout << "safe locked - change digit" << endl;
    }
    else if (s.compare("H") != 0 && n == 4567)
    {
        cout << "safe locked - change char" << endl;
    }
    else if (s.compare("H") != 0 && n != 4567)
    {
        cout << "safe locked" << endl;
    }
    return 0;
}