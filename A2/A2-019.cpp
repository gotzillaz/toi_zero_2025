#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string ts = s;
    transform(ts.begin(), ts.end(), ts.begin(), ::toupper);
    ts += "    ";
    int pb = -1;
    int lu = 0;
    bool chk = false;
    int mlu = 0;
    for (int i = 0; i < s.size(); i++)
    {
        // cout << "now " << ts[i] << endl;
        if (chk)
        {
            if (ts[i] == 'U')
                lu += 1;
            else if (ts[i] == 'B')
                lu = 0;
            else
                chk = false;
            mlu = max(lu, mlu);
            // cout << 'M' << mlu << endl;
        }
        else if (ts.substr(i, 3).compare("BUU") == 0)
        {
            // cout << 'K' << i << endl;
            chk = true;
            lu = 0;
        }
        if (ts[i] == 'B' && pb == -1)
            pb = i;
    }
    if (mlu > 0)
        cout << "Yes " << mlu << endl;
    else if (pb > -1)
        cout << s.substr(0, pb + 1) << string(s.size() - pb - 1, 'U') << endl;
    else
    {
        string tmp = "BUU";
        for (int i = 0; i < s.size(); i++)
        {
            cout << tmp[i % 3];
        }
        cout << endl;
    }
    return 0;
}
