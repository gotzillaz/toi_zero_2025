#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    for (int i = 0; i < n - 2; i++)
        cout << "*";
    cout << endl;
    for (int i = 0; i < n - 4; i++)
        cout << "*";
    cout << endl;

    return 0;
}
