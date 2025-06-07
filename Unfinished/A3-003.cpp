#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tr(2, vector<int>());
    for (int t = 0; t < 2; t++)
    {
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            tr[t].push_back(a);
        }
    }
    tr[0].push_back(tr[0][0]);
    tr[1].push_back(tr[1][0]);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (tr[0][i] == tr[1][i] && tr[0][i + 1] == tr[1][i + 1])
        {
            cout << "a " << i << endl;
            ans++;
        }
        else if (tr[0][i] == tr[1][i + 1] && tr[0][i + 1] == tr[1][i])
        {
            cout << "b " << i << endl;
            ans++;
        }
        else if (tr[0][i] > tr[1][i] && tr[0][i] < tr[1][i + 1] && tr[0][i + 1] != tr[1][i] &&
                 tr[0][i + 1] != tr[1][i + 1])
        {
            cout << "c " << i << endl;
            ans++;
        }
        else if (tr[0][i + 1] > tr[1][i] && tr[0][i + 1] < tr[1][i + 1] && tr[0][i] != tr[1][i] &&
                 tr[0][i] != tr[1][i + 1])
        {
            cout << "d " << i << endl;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
