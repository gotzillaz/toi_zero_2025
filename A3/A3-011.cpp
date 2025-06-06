#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> sp{0};
    int p;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        sp.push_back(sp[sp.size() - 1] + p);
    }
    set<int> ans;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            ans.insert(sp[j] - sp[i]);
        }
    }
    cout << ans.size() << endl;
    return 0;
}
