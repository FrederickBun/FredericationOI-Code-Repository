#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int a[110000];
int s[110000];
int n, m;
bool check(int x)
{
    int len = 1, d = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
            return false;
        if (d + a[i] > x)
        {
            len++;
            d = a[i];
            if (len > m)
                return false;
        }
        else
            d += a[i];
    }
    return true;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int l = 0, r = 1000000000;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid) == true)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}