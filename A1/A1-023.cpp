#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h;
    char d;
    cin >> h >> d;
    if (d == 'C')
    {
        if (h <= 0)
            cout << "solid";
        else if (h < 100)
            cout << "liquid";
        else
            cout << "gas";
    }
    else
    {
        if (h <= 32)
            cout << "solid";
        else if (h < 212)
            cout << "liquid";
        else
            cout << "gas";
    }
    cout << endl;
    return 0;
}
