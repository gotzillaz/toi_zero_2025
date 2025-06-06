#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> r(5, 0);
    vector<int> c(5, 0);
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            r[i] += x;
            c[j] += x;
        }
    }
    int ax = -1, ay = -1;
    for (int i = 0; i < 5; i++)
    {
        if (r[i] % 2)
            ax = i;
        if (c[i] % 2)
            ay = i;
    }
    cout << ax << " " << ay << endl;
    return 0;
}
