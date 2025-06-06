#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n;
    cin >> l >> n;
    vector<int> br(l + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        br[s] += 1;
        br[e] -= 1;
    }
    int ans = 0;
    for (int i = 1; i < l + 2; i++)
    {
        br[i] += br[i - 1];
        ans = max(br[i], ans);
    }
    cout << ans << endl;
    return 0;
}
