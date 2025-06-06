#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (s[0] == '+')
    {
        cout << n << " + " << (n % 10) * 10 + n / 10 << " = " << n + (n % 10) * 10 + (n / 10) << endl;
    }
    else
    {
        cout << n << " * " << (n % 10) * 10 + n / 10 << " = " << n * ((n % 10) * 10 + (n / 10)) << endl;
    }
    return 0;
}