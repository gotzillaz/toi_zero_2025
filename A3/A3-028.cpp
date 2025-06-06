#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, b;
    cin >> n >> m >> b;
    vector<vector<char>> mp(n + 2, vector<char>(m + 2, 0));
    for (int i = 0; i < b; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x + 1][y + 1] = -1;
        for (int r = -1; r <= 1; r++)
        {
            for (int c = -1; c <= 1; c++)
            {
                if (mp[x + 1 + r][y + 1 + c] != -1)
                    mp[x + 1 + r][y + 1 + c]++;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            printf("%c ", (mp[i][j] < 0 ? 'x' : '0' + mp[i][j]));
        }
        cout << endl;
    }
    return 0;
}
