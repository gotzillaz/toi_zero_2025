#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    string s, ty, to;
    int cost = 0;
    int ton = 0;
    map<string, int> mp{{"S", 60}, {"M", 80}, {"L", 100}};
    map<string, int> top{{"P", 15}, {"E", 10}, {"N", 0}};
    cin >> s >> ty >> to;
    cost = mp[s] + (ty.compare("T") == 0 ? 20 : 0);
    if (to.compare("N") != 0)
        cin >> ton;
    cost += top[to] * ton;
    cout << cost << endl;
    return 0;
}
