#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << max(a, b);
        ans += max(a, b);
        if (i < n - 1)
            cout << " + ";
        else
            cout << " ";
    }
    cout << (n == 1 ? "" : "= " + to_string(ans)) << endl;
    return 0;
}
