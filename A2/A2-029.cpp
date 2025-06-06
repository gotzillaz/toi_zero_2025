#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << (j == 0 || j == i - 1 || i == n ? 0 : 1) << " ";
        cout << endl;
    }
    return 0;
}
