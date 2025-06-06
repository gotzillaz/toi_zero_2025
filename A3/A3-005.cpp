#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> d(n + 1, 0);
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        d[a - 1]++;
        d[b]--;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i] + d[i - 1];
        ans = max(ans, d[i]);
    }
    cout << ans << endl;
    return 0;
}
