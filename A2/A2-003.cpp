#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    vector<int> h;
    int ans = 0;
    h.push_back(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        h.push_back(a);
    }
    h.push_back(0);
    for (int i = 1; i <= n; i++)
    {
        if (h[i] > h[i - 1] && h[i] > h[i + 1])
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}