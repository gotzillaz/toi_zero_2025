#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    string ans = "";
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (i > 0 && i % 3 == 0)
            ans = "," + ans;
        ans = n[n.size() - 1 - i] + ans;
    }
    cout << ans << endl;
    return 0;
}
