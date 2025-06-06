#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    cin >> n;
    vector<int> a(301, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x] += 1;
    }
    for (int i = 1; i < 301; i++)
    {
        ans = max(ans, a[i]);
    }
    cout << ans << endl;
    return 0;
}