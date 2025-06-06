#include <iostream>

using namespace std;

int main()
{
    int m = __INT32_MAX__;
    int n;
    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        if (n < m)
            m = n;
    }
    cout << m << endl;
    return 0;
}