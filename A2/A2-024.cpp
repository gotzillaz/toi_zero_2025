#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> d(3, 0);
    vector<int> sc(3, 0);
    vector<string> na{"Rabbit", "Monkey", "Frog"};
    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;
        d[i] = x;
    }
    int mx = 0;
    for (int i = 0; i < p; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int j = 0; j < 3; j++)
        {
            if (x % d[j] == 0)
                sc[j] += y;
            mx = max(mx, sc[j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (sc[i] == mx)
        {
            cout << na[i] << " " << sc[i] << endl;
        }
    }
    return 0;
}
