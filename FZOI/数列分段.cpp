#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int n, m, l, r;
int a[maxn];
bool check(int x)
{
    int sum = 0, num = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sum + a[i] <= x)
        {
            sum += a[i];
        }
        else
        {
            sum = a[i];
            num++;
        }
    }
    return num >= m;
}
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        l = max(l, a[i]);
        r += a[i];
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    printf("%d", l);
    return 0;
}