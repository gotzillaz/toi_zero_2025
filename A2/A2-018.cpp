#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char t;
    int n, st;
    vector<string> led{"Red", "Green", "Blue"};
    cin >> t >> n;
    switch (t)
    {
    case 'R':
        st = 0;
        break;
    case 'G':
        st = 1;
        break;
    case 'B':
        st = 2;
        break;
    default:
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << led[(st + i) % 3] << " ";
    }
    cout << endl;
    return 0;
}
