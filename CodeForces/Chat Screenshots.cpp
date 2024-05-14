#include <iostream>
using namespace std;

const int N = 200005;
struct Edge{
    int to, nxt;
}g[N];
int h[N], d[N], idx;
int a[N], q[N];
void add(int a,int b)
{
    g[++idx].to = b, g[idx].nxt = h[a], h[a] = idx;
    d[b] ++;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i ++ )
        h[i] = d[i] = 0;
    idx = 0;
    for (int i = 1;i <= k; i ++ )
    {
        for (int j = 1; j <= n; j ++ )
            scanf("%d", &a[j]);
        for (int j = 2; j < n; j ++ )
            add(a[j], a[j + 1]);
    }
    int hh = 0, tt = -1;
    for (int i = 1; i <= n; i ++ )
        if (d[i] == 0)
            q[ ++ tt] = i;
    while (hh <= tt)
    {
        int t = q[hh ++];
        for (int i = h[t]; i; i = g[i].nxt)
        {
            int j = g[i].to;
            if ( -- d[j] == 0)
                q[ ++ tt] = j;
        }
    }
    for (int i = 1; i <= n; i ++ )
        if (d[i] > 0)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}
