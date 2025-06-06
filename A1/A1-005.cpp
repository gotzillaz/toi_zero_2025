#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, d;
    cin >> m >> d;
    vector<string> ans = {"winter", "spring", "summer", "fall"};
    cout << ans[((m - 1) % 3 == 2 && d >= 21) ? (m - 1) / 3 + 1 : (m - 1) / 3] << endl;
    return 0;
}