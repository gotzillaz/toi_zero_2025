#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<string> grid;
    deque<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }
    q.push_front({n - 1, n - 1});
    visited[n - 1][n - 1] = true;
    while (q.size() > 0)
    {
        pair<int, int> p = q.front();
        q.pop_front();
        ans += 1;
        if (p.first - 1 >= 0 && grid[p.first - 1][p.second] == '.' && !visited[p.first - 1][p.second])
        {
            visited[p.first - 1][p.second] = true;
            q.push_back({p.first - 1, p.second});
        }
        if (p.second - 1 >= 0 && grid[p.first][p.second - 1] == '.' && !visited[p.first][p.second - 1])
        {
            visited[p.first][p.second - 1] = true;
            q.push_back({p.first, p.second - 1});
        }
    }
    cout << ans << endl;
    return 0;
}