#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string b, t;
    int bg, sw, tg;
    map<string, int> bm{{"H", 5}, {"O", 3}, {"J", 2}};
    map<string, vector<int>> tm{{"R", {12, 18, 25}}, {"T", {15, 20, 30}}, {"M", {10, 15, 20}}};
    cin >> b >> bg;
    cin >> t >> sw >> tg;
    cout << bm[b] * bg + tm[t][sw - 1] * tg << endl;
    return 0;
}
