#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int ans = -1;
    int la = 0;
    int ca = 0;
    bool fa = false;
    int cb = 0;
    bool fb = false;
    int bp = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (fa)
        {
            if (s[i] == 'A')
            {
                ca += 1;
                la = max(la, ca);
                ans = 1;
            }
            else if (s[i] == 'R' && ca != 0)
            {
                ca = 0;
                ans = 0;
                bp = i;
            }
            else if (s[i] == 'B' && ca != 0)
            {
                ca = 0;
                cb = 0;
                fa = false;
                fb = true;
                ans = 0;
                bp = i;
            }
            else
            {
                bp = i;
                ans = 0;
                break;
            }
        }
        else if (fb)
        {
            if (s[i] == 'I' || s[i] == 'T')
            {
                cb += 1;
                ans = 1;
            }
            else if (s[i] == 'B' && cb != 0)
            {
                cb = 0;
                ans = 0;
                bp = i;
            }
            else if (s[i] == 'R' && cb != 0)
            {
                cb = 0;
                ca = 0;
                fa = true;
                fb = false;
                ans = 0;
                bp = i;
            }
            else
            {
                bp = i;
                ans = 0;
                break;
            }
        }
        else if (s[i] == 'R')
        {
            ca = 0;
            fa = true;
            ans = 0;
            bp = i;
        }
        else if (s[i] == 'B')
        {
            cb = 0;
            fb = true;
            ans = 0;
            bp = i;
        }
        else if (s[i] == 'A')
        {
            bp = i;
            ans = 0;
            break;
        }
    }
    if (ans == -1)
        cout << "unknown " << s.size() << endl;
    else if (ans == 0)
        cout << "no " << bp << endl;
    else
        cout << "yes " << la << endl;
    return 0;
}
