#include<cstdio>
#include<algorithm>
#define N 355
using namespace std;

char a;
int b[N];
int n, ans;

int solve(int p, int dir)
{
    int len = 0;

    for(int j = p + n; len < n; len ++ , j += dir)
    {
        if(b[p] && b[j%n] && b[j % n] != b[p]) break;
        if(!b[p]) p = j % n;
    }
    return len;
}
int main()
{
    scanf("%d ", &n);
    for(int i = 0; i < n; i ++ )
    {
        a = getchar();
        b[i] = a == 'b' ? 1 : a == 'r' ? 2 : 0;
    }
    for(int i = 0; i < n; i ++ ) ans = max(ans, solve(i, - 1) + solve(i + 1, 1));
    ans = min(ans, n);
    printf("%d\n", ans);
    return 0;
}