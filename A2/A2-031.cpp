#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> c(2, vector<char>(n, '0'));
    for (int d = 0; d < 2; d++)
    {
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            c[d][i] = ch;
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int d, p;
        char ch;
        cin >> d >> p >> ch;
        c[d - 1][p] = ch;
    }
    int ans = 0;
    set<pair<char, char>> cr{{'A', 'T'}, {'T', 'A'}, {'C', 'G'}, {'G', 'C'}};
    for (int i = 0; i < n; i++)
    {
        if (cr.count({c[0][i], c[1][i]}) == 0)
            ans += 1;
    }
    for (int d = 0; d < 2; d++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << c[d][i] << ' ';
        }
        cout << endl;
    }
    cout << ans << endl;
    return 0;
}
