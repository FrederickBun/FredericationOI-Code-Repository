#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 45;
const int MAXC = 2000;
int n, c;
int arr[MAXN];
int dp[MAXN][MAXC];

int f()
{
    for (int i = 0; i <= c; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (arr[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - arr[i - 1]] + arr[i - 1]);
            }
        }
    }
    return dp[n][c];
}

int main()
{
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << f() << endl;
    return 0;
}