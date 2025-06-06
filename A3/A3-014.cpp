#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    vector<int> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        h.push_back(a);
    }
    sort(h.begin(), h.end());
    int ans = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (h[j] > 18 && i != j)
        {
            if (h[i] <= 18)
                i++;
            ans++;
        }
        ans++;
        j--;
    }
    cout << ans << endl;
    return 0;
}
