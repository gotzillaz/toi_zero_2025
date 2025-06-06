#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << endl
         << ((a + b >=
              50)
                 ? "pass"
                 : "fail")
         << endl;
    return 0;
}