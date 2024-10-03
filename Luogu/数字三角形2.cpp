#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int N = 2e3 + 10;

int mp[N][N], d[N][N];

signed main()
{
	int n;
	cin >> n ;
	for(int i = 1; i <= n; ++ i)
	{
		for(int j = 1; j <= i; ++ j)
		{
			cin >> mp[i][j] ;
		}
	} 
	for(int i = 1; i <= n; ++ i)
	{
		for(int j = 1; j <= i; ++ j)
		{
			d[i][j] = max(d[i - 1][j - 1] + mp[i][j] % 100, d[i - 1][j] + mp[i][j] % 100);
		}
	}
	int ans = 0; 
	for(int i = 1; i <= n; ++ i)
	{
		// cout << d[n][i] << " " ;
		ans = max(ans, d[n][i] % 100);
	}
	cout << ans ;
	return 0;
}