#include<iostream>
using namespace std;

long long t, n, a[300005];
long long cnt[300005], s[300005], ans;
int main(){
	ios::sync_with_stdio(0);
	cin >> t;
	while(t -- ){
		cin >> n;
		ans = 0;
		for(int i = 0; i <= n; i ++ ) cnt[i] = s[i] = 0;
		for(int i = 1; i <= n; i ++ ) cin >> a[i], cnt[a[i]] ++ ;
		for(int i = 0; i <= n; i ++ ) ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6, s[i] = (i == 0 ? 0 : s[i - 1]) + cnt[i];
		for(int i = 1; i <= n; i ++ ) ans += cnt[i] * (cnt[i] - 1) / 2 * s[i-1];
		cout << ans << "\n";
	}
	return 0;
}
