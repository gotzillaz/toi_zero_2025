#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long ans = 1;
    for (long long i = n; i > 0; i--)
        ans *= i;
    cout << ans << endl;
    return 0;
}
