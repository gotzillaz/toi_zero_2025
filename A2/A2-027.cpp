#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = 0;
    map<int, int> ct;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mx = max(mx, x);
        if (ct.count(x) == 0)
            ct[x] = 1;
        else
            ct[x]++;
    }
    cout << mx << endl << ct[mx] << endl;
    return 0;
}
