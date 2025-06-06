#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string c;
    cin >> c;
    transform(c.begin(), c.end(), c.begin(), ::toupper);
    map<char, string> level{{'J', "jack"}, {'Q', "queen"}, {'K', "king"}, {'A', "ace"}};
    map<char, string> type{{'D', "diamonds"}, {'H', "hearts"}, {'S', "spades"}, {'C', "clubs"}};

    cout << ((c[0] >= '0' && c[0] <= '9') ? c.substr(0, c.size() - 1) : level[c[0]]) << " of " << type[c[c.size() - 1]]
         << endl;
    return 0;
}
