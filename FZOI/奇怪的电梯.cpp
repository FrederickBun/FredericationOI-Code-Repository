#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, a, b, k[201], dis[201];

void dfs(int node, int step)
{
    dis[node] = step;
    int v = node - k[node];
    if (1 <= v && step + 1 < dis[v])
        dfs(v, step + 1);
    v = node + k[node];
    if (v <= n && step + 1 < dis[v])
        dfs(v, step + 1);
    return;
}
signed main()
{
    memset(dis, 0x3f, sizeof(dis));
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
        cin >> k[i];
    dfs(a, 0);
    if(dis[b] == 0x3f3f3f3f3f3f3f3f) cout << -1 << endl;
    else cout << dis[b] << endl;
    return 0;
}