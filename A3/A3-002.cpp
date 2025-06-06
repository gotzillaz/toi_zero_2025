#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int i = 1;
    while (n > i * i)
        i++;
    cout << 1 + max((i - 2) * 2, 0) + ((i % 2 == 1) ? (n % 2 == 1 ? 1 : 0) : (n % 2 == 1 ? 0 : 1)) << endl;
    return 0;
}
