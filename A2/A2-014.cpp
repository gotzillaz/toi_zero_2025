#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string a, b;
    int w = 0, mw = 0, wc = 0;
    cin >> a >> b;
    string ans = "";
    set<char> pt{'l', 'o', 'v', 'e', 'L', 'O', 'V', 'E'};
    for (int i = 0; i < max(a.length(), b.length()); i++)
    {
        if (pt.count(a[i % a.length()]) || pt.count(b[i % b.length()]))
        {
            ans += "w";
            w++;
            wc++;
            mw = max(mw, w);
        }
        else
        {
            w = 0;
            ans += "$";
        }
    }
    if (wc % 2)
        ans += to_string(mw);
    else if (mw < 2)
        ans += "#";
    cout << ans << endl;
    return 0;
}
