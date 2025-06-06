#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> c;
    vector<int> mv;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        c.push_back({a, b});
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (mv.empty() || c[i].second > mv[mv.size() - 1])
        {
            mv.push_back(c[i].second);
        }
        else if (c[i].second < mv[mv.size() - 1])
        {
            mv.push_back(mv[mv.size() - 1]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << ": " << c[i].second << " " << mv[n - 1 - i] << endl;
        if (c[i].second < mv[n - 1 - i])
            ans++;
    }
    cout << ans << endl;
    return 0;
}
