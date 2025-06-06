#include <iostream>

using namespace std;

int main()
{
    int d, m;
    cin >> d >> m;
    if ((m == 12 && d >= 22) || (m == 1 && d <= 19))
        cout << "capricorn";
    else if ((m == 1 && d >= 20) || (m == 2 && d <= 18))
        cout << "aquarius";
    else if ((m == 2 && d >= 19) || (m == 3 && d <= 20))
        cout << "pisces";
    else if ((m == 3 && d >= 21) || (m == 4 && d <= 19))
        cout << "aries";
    else if ((m == 4 && d >= 20) || (m == 5 && d <= 20))
        cout << "taurus";
    else if ((m == 5 && d >= 21) || (m == 6 && d <= 21))
        cout << "gemini";
    else if ((m == 6 && d >= 22) || (m == 7 && d <= 22))
        cout << "cancer";
    else if ((m == 7 && d >= 23) || (m == 8 && d <= 22))
        cout << "leo";
    else if ((m == 8 && d >= 23) || (m == 9 && d <= 22))
        cout << "virgo";
    else if ((m == 9 && d >= 23) || (m == 10 && d <= 23))
        cout << "libra";
    else if ((m == 10 && d >= 24) || (m == 11 && d <= 21))
        cout << "scorpio";
    else if ((m == 11 && d >= 22) || (m == 12 && d <= 21))
        cout << "sagittarius";
    cout << endl;
    return 0;
}
