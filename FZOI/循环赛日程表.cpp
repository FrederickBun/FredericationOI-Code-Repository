#include <bits/stdc++.h>
#define int long long
using namespace std;

void f(vector<vector<int>> &vt, int n)
{
    if (n == 1)
    {
        vt[0][0] = 0;
        return;
    }
    int m = n / 2;
    f(vt, m);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            vt[i][j + m] = vt[i][j] + m;
            vt[i + m][j] = vt[i][j + m];
            vt[i + m][j + m] = vt[i][j];
        }
    }
}

signed main()
{
    int m;
    cin >> m;
    int n = pow(2, m);
    vector<vector<int>> vt(n, vector<int>(n));
    f(vt, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << vt[i][j] + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
