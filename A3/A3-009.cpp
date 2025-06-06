#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ln(k, 0);
    int a;
    int mx = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ln[a - 1]++;
    }
    for (int i = 0; i < k; i++)
    {
        mx = min(ln[i], mx);
    }
    cout << n - (mx * k) << endl;
    return 0;
}
