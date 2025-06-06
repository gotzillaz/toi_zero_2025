#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int> a;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            a[i] += a[i - 1];
        ans += a[i] * 2;
    }
    cout << ans << endl;
    return 0;
}
