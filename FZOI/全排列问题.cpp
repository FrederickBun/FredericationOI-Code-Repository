#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, arr[1030], ans[10];
void dfs(int i, int s)
{
    if (i > n)
    {
        for (int p = 1; p <= n; p++) printf("%5d", ans[p]);
        cout << endl;
        return;
    }
    for (int j = s; j > 0; j -= j & (-j))
    {
        int temp = j & (-j);
        ans[i] = arr[temp];
        dfs(i + 1, s - temp);
    }
}
signed main()
{
    cin >> n;
    arr[1] = 1;
    for (int i = 2; i <= n; i++)
        arr[1 << (i - 1)] = i;
    dfs(1, (1 << n) - 1);
    return 0;
}
