#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    map<int, pair<int, int>> up;
    map<int, pair<int, int>> dw;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (up.count(b - a) == 0)
            up[b - a] = make_pair(a, a);
        else
            up[b - a] = make_pair(min(a, up[b - a].first), max(a, up[b - a].second));
        if (dw.count(a + b) == 0)
            dw[a + b] = make_pair(a, a);
        else
            dw[a + b] = make_pair(min(a, dw[a + b].first), max(a, dw[a + b].second));
    }
    for (auto const &x : up)
    {
        ans = max(ans, abs(x.second.first - x.second.second));
    }
    for (auto const &x : dw)
    {
        ans = max(ans, abs(x.second.first - x.second.second));
    }
    cout << ans << endl;
    return 0;
}
