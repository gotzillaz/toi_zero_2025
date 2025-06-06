#include <iostream>

using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    if (a[0] == a[1] && a[1] == a[2])
    {
        cout << "all the same" << endl;
    }
    else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2])
    {
        cout << "all different" << endl;
    }
    else
    {
        cout << "neither" << endl;
    }
    return 0;
}