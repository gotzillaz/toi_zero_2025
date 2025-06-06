#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mp;
    for (int i = 0; i < n; i++)
    {
        vector<char> mpx;
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            mpx.push_back(a);
        }
        mp.push_back(mpx);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[i][j] == '*')
                mp[i + 1][j] = '*';
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << mp[i][j] << " ";
        cout << endl;
    }
    return 0;
}
