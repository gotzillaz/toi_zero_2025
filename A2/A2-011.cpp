#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        if (s.count(n) == 0)
            cout << n << " ";
        s.insert(n);
    }
    return 0;
}
