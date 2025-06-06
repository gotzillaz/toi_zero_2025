#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, y, q;
    cin >> n >> m;
    cin >> x >> y;
    cin >> q;
    vector<vector<int>> mp(n + 4, vector<int>(m + 4, 0));
    for (int t = 0; t < q; t++)
    {
        int r, c;
        cin >> r >> c;
        mp[r + 2][c + 2] = 100;
        for (int i = r + 1; i <= r + 3; i++)
        {
            for (int j = c + 1; j <= c + 3; j++)
            {
                mp[i][j] = max(mp[i][j], 60);
            }
        }
        for (int i = r; i <= r + 4; i++)
        {
            for (int j = c; j <= c + 4; j++)
            {
                mp[i][j] = max(mp[i][j], 20);
            }
        }
    }
    int ans = 0;
    for (int i = 2; i < n + 2; i++)
    {
        for (int j = 2; j < m + 2; j++)
        {
            if (mp[i][j] == 0)
                ans++;
        }
    }
    cout << ans << endl;
    cout << mp[x + 2][y + 2] << "%" << endl;
    return 0;
}
