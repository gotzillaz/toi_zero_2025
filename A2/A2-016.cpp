#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sj, s;
    int nj, n;
    cin >> sj >> nj;
    cin >> s >> n;
    if (sj.compare(s) == 0)
        if (nj == n)
            cout << 1000000 << endl;
        else if (nj % 1000 == n % 1000)
            cout << 2000 << endl;
        else if (nj % 100 == n % 100)
            cout << 1000 << endl;
        else
            cout << 20 << endl;
    else if (nj == n)
        cout << 100000 << endl;
    else if (nj % 1000 == n % 1000)
        cout << 200 << endl;
    else if (nj % 100 == n % 100)
        cout << 100 << endl;
    else
        cout << 0 << endl;
    return 0;
}
