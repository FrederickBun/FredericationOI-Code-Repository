#include <bits/stdc++.h>
#define int long long
using namespace std;

int A, B, P, ANS;
__int128 a, b, p, ans;

signed main()
{
	cin >> A >> B >> P ;
	a = A;
	b = B;
	p = P;
	ans = a * b % p;
	ANS = ans;
	cout << ANS ;
	return 0;
}
