#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

const int N = 10005;

vector<int> h(N);

int f(const vector<int> &h, int l, int r, int x)
{
    int cnt = 0;
    int start = l - 1;
    bool flag = false;

    for (int i = start; i < r; ++i)
    {
        if (h[i] > x)
        {
            if (!flag)
            {
                cnt++;
                flag = true;
            }
        }
        else
        {
            flag = false;
        }
    }
    return cnt;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i)
    {
        cin >> h[i];
    }

    for (int i = 0; i < q; ++i)
    {
        int l, r, x;
        cin >> l >> r >> x;
        cout << f(h, l, r, x) << endl ;
    }

    return 0;
}