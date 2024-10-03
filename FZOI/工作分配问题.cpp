#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN = 20;
int n;
int arr[MAXN][MAXN];
int mn;
void f()
{
    mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt += arr[j][i];
        }
        mn = min(mn, cnt);
    }
}

signed main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    f();
    cout << mn << endl;
    return 0;
}