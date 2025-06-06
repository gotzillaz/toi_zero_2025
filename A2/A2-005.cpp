#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w, h, m, n;
    cin >> w >> h >> m >> n;
    int a[m + 2], b[n + 2];
    a[0] = 0;
    a[m + 1] = w;
    b[0] = 0;
    b[n + 1] = h;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    vector<int> ans;
    for (int i = 0; i < m + 1; i++)
        for (int j = 0; j < n + 1; j++)
            ans.push_back((a[i + 1] - a[i]) * (b[j + 1] - b[j]));
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << " " << ans[ans.size() - 2] << endl;
    return 0;
}