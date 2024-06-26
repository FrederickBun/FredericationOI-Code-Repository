#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101000], b[101000], c[101000], d[101000];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
    }
    int num = -1;
    int x, y;
    cin >> x >> y;
    for(int i = n; i >= 1; i--) {
        if(a[i] <= x && b[i] <= y && c[i] + a[i] >= x && d[i] + b[i] >= y)
        {
            num = i;
            break;
        }
    }
    cout << num;
    return 0;
}