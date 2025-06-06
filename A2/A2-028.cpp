#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] + b[i] - '0' != '9')
            ans++;
    }
    if (ans == 0)
        cout << "YES" << endl;
    else
        cout << "NO " << ans << endl;
    return 0;
}
