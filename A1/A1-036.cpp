#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n / 10 * 10; i >= 0; i -= 10)
        cout << i << " ";
    cout << endl;
    return 0;
}
