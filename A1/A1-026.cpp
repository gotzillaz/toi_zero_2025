#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    int e = 0, o = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        if (a % 2)
            o++;
        else
            e++;
    }
    cout << "even " << e << endl;
    cout << "odd " << o << endl;
    return 0;
}
