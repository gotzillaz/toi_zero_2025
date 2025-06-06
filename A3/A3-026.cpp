#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a, b;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        b.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((a[i][j] == '-' && b[i][j] == '+') || (a[i][j] == '+' && b[i][j] == '-'))
                cout << '+';
            else if ((a[i][j] == '-' && b[i][j] == 'x') || (a[i][j] == 'x' && b[i][j] == '-'))
                cout << 'x';
            else if ((a[i][j] == '+' && b[i][j] == 'x') || (a[i][j] == 'x' && b[i][j] == '+'))
                cout << '*';
            else
                cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
