#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 8;
int n;
int arr[MAXN][MAXN];
int color[MAXN];
int ans;

bool f(int v, int c)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[v][i] && color[i] == c)
        {
            return false;
        }
    }
    return true;
}

void dfs(int v)
{
    if (v == n)
    {
        ans++;
        return;
    }
    for (int c = 1; c <= 4; c++)
    {
        if (f(v, c))
        {
            color[v] = c;
            dfs(v + 1);
            color[v] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    memset(color, 0, sizeof(color));
    ans = 0;
    dfs(0);
    cout << ans << endl;
    return 0;
}