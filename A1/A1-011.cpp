#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    s += " ";
    int n = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << n << s[i];
            n = 1;
        }
        else
            n++;
    }
    cout << endl;
    return 0;
}