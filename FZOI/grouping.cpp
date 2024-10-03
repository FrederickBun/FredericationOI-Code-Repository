#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define IMX LONG_LONG_MAX
#define IMN LONG_LONG_MIN
using namespace std;

/* toothless. #17 */

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int n, mn = IMX;
int a[N];

signed main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ )
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int cnt = 1;
    for (int i = 1; i < n; i ++ )
    {
        if (a[i] == a[i - 1] + 1)
        {
            cnt ++ ;
        }
        else
        {
            mn = min(mn, cnt);
            cnt = 1;
        }
    }
    mn = min(mn, cnt);
    cout << mn << endl;
    return 0;
}