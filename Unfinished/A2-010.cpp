#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> mp(10001, vector<int>());
    int nd = 0, nl = 0;
    int lim = 0;
    for (int i = 0; i < n; i++)
    {
        int d, l;
        cin >> d >> l;
        if (d == 1)
        {
            nd += d;
            mp[nd].push_back(nl);
            nl += l;
            lim = max(nd, lim);
        }
        else
        {
            mp[nd].push_back(nl);
            nd += d;
            nl += l;
        }
    }
    map<int, int> ml;
    for (int i = 1; i < lim + 1; i++)
    {
        cout << "FF" << i << " " << mp[i].size() << endl;
        for (int j = 0; j < mp[i].size() - 1; j++)
        {
            if (ml.count(mp[i][j + 1] - mp[i][j] + 1))
                ml[mp[i][j + 1] - mp[i][j] + 1] = max(ml[mp[i][j + 1] - mp[i][j] + 1], i);
            else
                ml[mp[i][j + 1] - mp[i][j] + 1] = i;
        }
        if (ml.count(nl - mp[i][mp[i].size() - 1] + 1))
            ml[nl - mp[i][mp[i].size() - 1] + 1] = max(ml[nl - mp[i][mp[i].size() - 1] + 1], i);
        else
            ml[nl - mp[i][mp[i].size() - 1] + 1] = i;
    }
    for (auto x : ml)
    {
        cout << x.first << " " << x.second << endl;
    }
    for (int i = 0; i < q; i++)
    {
        int qa;
        cin >> qa;
    }
    return 0;
}
