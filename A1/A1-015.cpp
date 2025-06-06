#include <iostream>

using namespace std;

int main()
{
    string f, s, a;
    cin >> f >> s >> a;
    if (f.length() > 5 && s.length() > 5)
    {
        cout << f[0] << f[1] << s[s.length() - 1] << a[a.length() - 1] << endl;
    }
    else
    {
        cout << f[0] << a << s[s.length() - 1] << endl;
    }
    return 0;
}