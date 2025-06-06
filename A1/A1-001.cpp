#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first;
    string last;
    cin >> first >> last;
    cout << "Hello " << first << " " << last << endl;
    cout << first.substr(0, 2) << last.substr(0, 2) << endl;
}