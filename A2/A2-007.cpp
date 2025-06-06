#include <bits/stdc++.h>

using namespace std;

int dfs(vector<int> &co, vector<vector<int>> &tr, int now)
{
    int nco = co[now];
    for (int i = 0; i < tr[now].size(); i++)
    {
        nco += dfs(co, tr, tr[now][i]);
    }
    co[now] = nco;
    // cout << "dfs " << now << " " << nco << endl;
    return nco;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> dt{{0, 100001}};
    vector<int> tg;
    vector<int> ans;
    vector<vector<int>> tr(n + 1, vector<int>());
    vector<vector<int>> rtr(n + 1, vector<int>());
    vector<int> co(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        dt.push_back({a, b});
    }
    for (int i = 1; i <= n; i++)
    {
        pair<int, int> can = dt[0];
        int cani = 0;
        for (int j = 0; j <= n; j++)
        {
            if (can.second - can.first > dt[j].second - dt[j].first && dt[i].first > dt[j].first &&
                dt[i].second < dt[j].second)
            {
                can = dt[j];
                cani = j;
            }
        }
        tr[cani].push_back(i);
        rtr[i].push_back(cani);
    }
    // set<int> cov;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        // cov.insert(a);
        co[a] = 1;
    }
    deque<int> q;
    for (int i = 0; i < tr[0].size(); i++)
    {
        // cout << "g " << tr[0][i] << endl;
        q.push_back(tr[0][i]);
    }
    dfs(co, tr, 0);
    // int ansc = 0;
    // for (int i = 0; i < n + 1; i++)
    //     cout << co[i] << " ";
    while (!q.empty())
    {
        int now = q[0];
        q.pop_front();
        int emp = 0;
        bool chk = false;
        // cout << now << " now" << endl;
        for (int i = 0; i < tr[now].size(); i++)
            if (co[tr[now][i]] == 0)
                emp++;
            else if (co[tr[now][i]] == co[now])
            {
                q.push_back(tr[now][i]);
                chk = true;
            }
        // cout << emp << " " << tr[now].size() << " " << co[now] << endl;
        if (chk)
            continue;
        if (emp < tr[now].size() - emp || co[now] > 0)
            ans.push_back(now);
        else
            for (int i = 0; i < tr[now].size(); i++)
                q.push_back(tr[now][i]);
    }
    // cout << endl;
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
