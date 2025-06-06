#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, t;
    cin >> n >> k >> t;
    t--;
    int now = 0;
    for (int i = 0; i < n; i++)
    {
        if (now == t)
        {
            cout << i + 1 << endl;
            return 0;
        }
        else if (now == 0 && i > 0)
        {
            cout << i << endl;
            return 0;
        }
        now += k;
        now %= n;
    }
    return 0;
}
