#include <iostream>

using namespace std;

int main()
{
    int x[6];
    for (int i = 0; i < 6; i += 3)
    {
        cin >> x[i] >> x[i + 1] >> x[i + 2];
    }
    for (int i = 0; i < 3; i++)
    {
        if (x[i] < x[i + 3])
        {
            cout << 1 << endl;
            return 0;
        }
        else if (x[i] > x[i + 3])
        {
            cout << 2 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}