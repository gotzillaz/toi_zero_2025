#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    while (1)
    {
        cin >> n;
        if (n == 1)
            ans += 100;
        else if (n == 2)
            ans += 120;
        else if (n == 3)
            ans += 200;
        else if (n == 4)
            ans += 60;
        else
            break;
    }
    cout << "Bye Bye" << endl;
    cout << "Total Calories: " << ans << endl;
    return 0;
}
