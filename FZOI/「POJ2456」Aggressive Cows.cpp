#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int judge(int, int);
int arr[100000];
int n, c;
int main()
{
    scanf("%d%d", &n, &c);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    int l = arr[0];
    int r = arr[n - 1] - arr[0];
    int D;
    while (r >= l)
    {
        D = (l + r) >> 1;
        if (judge(n, D) >= c)
            l = D + 1;
        else
            r = D - 1;
    }
    printf("%d\n", l - 1);
    return 0;
}
int judge(int n, int D)
{
    int i, s = 1, p = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] - p >= D)
        {
            s++;
            p = arr[i];
        }
    }
    return s;
}