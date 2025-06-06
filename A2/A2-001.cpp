#include <bits/stdc++.h>

using namespace std;

pair<double, double> find_point(pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d)
{
    double a1 = b.second - a.second;
    double b1 = a.first - b.first;
    double c1 = a1 * a.first + b1 * a.second;

    double a2 = d.second - c.second;
    double b2 = c.first - d.first;
    double c2 = a2 * c.first + b2 * c.second;

    double determinant = a1 * b2 - a2 * b1;

    if (determinant == 0)
        return {-1, -1};

    double x = (b2 * c1 - b1 * c2) / determinant;
    double y = (a1 * c2 - a2 * c1) / determinant;

    // cout << "cal " << x << " " << y << endl;
    if (x < 0 || x > 1)
    {
        return {-1, -1};
    }

    return {x, y};
}

int main()
{
    int n, m;
    vector<pair<int, int>> r, b;
    cin >> n >> m;
    r.push_back({1, 0});
    b.push_back({1, 0});
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        r.push_back({i % 2, x});
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back({i % 2, x});
    }
    set<pair<double, double>> ans_set;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << "i: " << i << " j: " << j << endl;
            pair<double, double> res = find_point(r[i], r[i + 1], b[j], b[j + 1]);
            // cout << "res " << res.first << " " << res.second << endl;
            if (!(res.first < 0 || res.first > 1 || res.second == -1))
            {
                // cout << "i: " << i << " j: " << j << endl;
                ans_set.insert(res);
            }
        }
    }
    cout << ans_set.size() << endl;
    return 0;
}
