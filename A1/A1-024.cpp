#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, c;
    cin >> y >> c;
    if (y <= 1990)
        cout << ((c <= 1500 ? 1250 : (c <= 2000 ? 1400 : 2000)));
    else if (y <= 1999)
        cout << ((c <= 1500 ? 1100 : (c <= 2000 ? 1300 : 1700)));
    else
        cout << ((c <= 1500 ? 1000 : (c <= 2000 ? 1200 : 1500)));
    cout << endl;
    return 0;
}
