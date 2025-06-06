#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main()
{
    int n;
    int ans = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans = min(ans, a);
    }
    cout << ans << endl;
    return 0;
}
