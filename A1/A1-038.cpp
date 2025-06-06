#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5)
            cout << "*";
        else
            cout << "X";
    }
    cout << endl;
    return 0;
}
