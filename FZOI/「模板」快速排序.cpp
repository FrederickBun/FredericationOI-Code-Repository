#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, l, num, head[1001], tail[1001], a[100001], ans[100001];
void selection_sort(int l, int r)
{
    int length = r - l + 1;
    for (int i = 1; i <= length; i++)
    {
        int aim = l + i - 1;
        for (int j = l + i - 1; j <= r; j++)
            if (a[j] < a[aim])
                aim = j;
        swap(a[l + i - 1], a[aim]);
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    l = sqrt(n);
    num = (n - 1) / l + 1;
    for (int i = 1; i <= num - 1; i++)
    {
        head[i] = l * (i - 1) + 1;
        tail[i] = head[i] + l - 1;
    }
    head[num] = l * (num - 1) + 1;
    tail[num] = n;
    for (int i = 1; i <= num; i++)
        selection_sort(head[i], tail[i]);

    for (int i = 1; i <= n; i++)
    {
        int aim = 0;
        for (int j = 1; j <= num; j++)
            if (head[j] <= tail[j])
            {
                aim = j;
                break;
            }

        for (int j = aim + 1; j <= num; j++)
        {
            if (head[j] > tail[j])
                continue;
            if (a[head[j]] < a[head[aim]])
                aim = j;
        }
        ans[i] = a[head[aim]];
        head[aim]++;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    return 0;
}