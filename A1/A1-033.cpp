#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    set<char> vowel{'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        ans += (vowel.count(a) > 0 ? 1 : 0);
    }
    cout << ans << endl;
    return 0;
}
