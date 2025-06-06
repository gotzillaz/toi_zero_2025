#include <iostream>

using namespace std;

int main()
{
    int n;
    string r[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    cin >> n;
    if (n > 9 || n == 0)
        cout << "Error : Out of range" << endl;
    else if (n < 0)
        cout << "Error : Please input positive number" << endl;
    else
        cout << r[n] << endl;
    return 0;
}