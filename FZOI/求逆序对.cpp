#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int tree[N];

void updata(int idx, int k)
{
	while(idx <= N)
	{
		tree[idx] += k;
		idx += (idx) & (-idx);
		
	}
}

int query(int idx)
{
	int res = 0;
	while(idx)
	{
		res += tree[idx];
		idx -= (idx) & (-idx); 
	} 
	return res;
}
signed main()
{
	int n;
	cin >> n ;
	vector<int> a(n + 1);
	for(int i = 1; i <= n; ++ i)
	{
		cin >> a[i];
	}
	vector<int> b = a;
	sort(b.begin() + 1, b.end());
	map<int, int> cnt;
	int t = 1;
	for(int i = 1; i <= n; ++ i)
	{
		if(!cnt.count(b[i])) cnt[b[i]] = t, t ++ ;
	}
	for(int i = 1; i <= n; ++ i) a[i] = cnt[a[i]];
	int ans = 0;
	for(int i = n; i >= 1; -- i)
	{
		updata(a[i], 1);
		ans += query(a[i] - 1);
	}
	cout <<ans << endl ;
}