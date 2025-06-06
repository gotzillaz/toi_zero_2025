#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mp(n + 2, vector<int>(m + 2, 0));
    int p;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x + 1][y + 1]++;
    }
    int ans = 0;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            if (mp[i][j] == 0)
                ans = max(ans, mp[i - 1][j - 1] + mp[i - 1][j] + mp[i - 1][j + 1] + mp[i][j - 1] + mp[i][j + 1] +
                                   mp[i + 1][j - 1] + mp[i + 1][j] + mp[i + 1][j + 1]);
        }
    }
    cout << ans << endl;
    return 0;
}
