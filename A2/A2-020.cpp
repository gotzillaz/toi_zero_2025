#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nx;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nx.push_back(x - 1);
    }
    int ans = 1;
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            int count = 0;
            int now = i;
            while (!vis[now])
            {
                vis[now] = true;
                count += 1;
                now = nx[now];
            }
            ans = max(ans, count);
        }
    }
    cout << ans << endl;
    return 0;
}
