#include <bits/stdc++.h>
#define int long long
using namespace std;

int m;

int f(int a, int b)
{
	if(b == 0) return 1 % m;
	else if(b % 2 == 1) return (f(a, (b - 1)) * a) % m;
	return (f(a, b / 2) * f(a, b / 2)) % m;
}

signed main()
{
	int a, b;
	cin >> a >> b >> m ;
	cout << a << "^" << b << " mod " << m << "=" << f(a, b) ;
	return 0;
}