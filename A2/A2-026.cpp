#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ov = 0;
    pair<string, int> rabbit{"", INT_MIN};
    for (int i = 0; i < n; i++)
    {
        string a;
        int b;
        cin >> a >> b;
        if (b > 15)
            ov++;
        if (b > rabbit.second)
        {
            rabbit.first = a;
            rabbit.second = b;
        }
    }
    cout << ov << endl;
    cout << rabbit.first << " " << rabbit.second << endl;
    return 0;
}
