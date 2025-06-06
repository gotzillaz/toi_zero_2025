#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n;
    cin >> l >> n;
    int cur = 0;
    for (int i = 1; i <= l; i++)
    {
        cur += i * i;
        if (n < cur)
        {
            cout << l - i + 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
