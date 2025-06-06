#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << string(s.rbegin(), s.rend()) << endl;
    return 0;
}
