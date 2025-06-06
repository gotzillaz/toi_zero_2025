#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    set<char> vowel{'a', 'e', 'i', 'o', 'u'};
    for (char c : s)
    {
        ans += (vowel.count(c) != 0 ? 1 : 0);
    }
    cout << ans << endl;
    return 0;
}
