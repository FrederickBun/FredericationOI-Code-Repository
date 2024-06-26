#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, m;
int a[505];
int x[505], y[505];

bool check(int s)
{
    int num = 1, t = 0;
    for (int i = n; i >= 1; i--)
    {
        if (t + a[i] > s)
            t = 0, num++;
        t += a[i];
    }
    return num <= m;
}

int find(int low, int high)
{
    int mid;
    while (low + 1 < high)
    {
        mid = low + (high - low) / 2;
        if (check(mid))
            high = mid;
        else
            low = mid;
    }
    return high;
}

signed main()
{
    int low = 0, high = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        high += a[i];
        low = max(low, a[i]);
    }
    int s = find(low, high);
    int t = 0, num = 1;
    for (int i = 1; i <= m; i++)
        x[i] = y[i] = 0;

    y[1] = n;
    for (int i = n; i >= 1; i--)
    {
        if (t + a[i] > s)
        {
            t = 0;
            x[num] = i + 1;
            y[++num] = i;
        }
        t += a[i];
    }
    x[num] = 1;

    for (int i = m; i >= 1; i--)
        cout << x[i] << " " << y[i] << endl;
    return 0;
}