#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int now = 0;
    vector<int> psum_w(1000002, 0);
    vector<int> max_w(1000002, 0);
    vector<int> last_d(1000002, -1);
    for (int i = 0; i < n; i++)
    {
        int d, l;
        cin >> d >> l;
        psum_w[i + 1] = psum_w[i] + l;
        now += d;
        if (d == -1)
        {
            max_w[now] = max(max_w[now], psum_w[i + 1] - psum_w[last_d[now]]);
            last_d[now] = -1;
        }
        else
            last_d[now] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (last_d[i] >= 0)
            max_w[i] = max(max_w[i], psum_w[n] - psum_w[last_d[i]]);
    }
    for (int i = 0; i < q; i++)
    {
        int q;
        cin >> q;
    }
    return 0;
}
