#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans = "";
    vector<string> rom{"I", "V", "X", "L", "C", "D", "M"};
    int base = 0;
    while (n != 0)
    {
        int x = n % 10;
        if (x == 1)
            ans = rom[base] + ans;
        else if (x == 2)
            ans = rom[base] + rom[base] + ans;
        else if (x == 3)
            ans = rom[base] + rom[base] + rom[base] + ans;
        else if (x == 4)
            ans = rom[base] + rom[base + 1] + ans;
        else if (x == 5)
            ans = rom[base + 1] + ans;
        else if (x == 6)
            ans = rom[base + 1] + rom[base] + ans;
        else if (x == 7)
            ans = rom[base + 1] + rom[base] + rom[base] + ans;
        else if (x == 8)
            ans = rom[base + 1] + rom[base] + rom[base] + rom[base] + ans;
        else if (x == 9)
            ans = rom[base] + rom[base + 2] + ans;
        n /= 10;
        base += 2;
    }
    cout << ans << endl;
    return 0;
}
