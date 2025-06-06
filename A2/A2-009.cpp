#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int a;
    vector<vector<int>> m(1, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        vector<int> mb(1, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            mb.push_back(a);
        }
        m.push_back(mb);
    }
    vector<int> comp(n);
    iota(comp.begin(), comp.end(), 1);
    while (comp.size() > 1)
    {
        // for (int i = 0; i < comp.size(); i++)
        // {
        //     cout << comp[i] << " x ";
        // }
        // cout << endl;
        vector<int> next_comp;
        for (int i = 0; i < comp.size(); i += 2)
        {
            // cout << "f " << comp[i] << " " << comp[i + 1] << " " << m[comp[i]][comp[i + 1]] << endl;
            if (m[comp[i]][comp[i + 1]] == comp[i])
            {
                if (c == comp[i + 1])
                {
                    c = 0;
                    next_comp.push_back(comp[i + 1]);
                }
                else
                {
                    next_comp.push_back(comp[i]);
                }
            }
            else
            {
                if (c == comp[i])
                {
                    c = 0;
                    next_comp.push_back(comp[i]);
                }
                else
                {
                    next_comp.push_back(comp[i + 1]);
                }
            }
            // cout << "s " << next_comp.size() << endl;
        }
        comp = next_comp;
    }
    cout << comp[0] << endl;
    return 0;
}
