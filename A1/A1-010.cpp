#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    cout << ((n < 18 || (s[0] == 's' || s[0] == 'S')) ? 20 : 50) << endl;
    return 0;
}