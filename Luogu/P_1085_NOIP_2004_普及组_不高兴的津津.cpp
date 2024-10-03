#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define fp(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a += _d)
#define fm(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a -= _d)
#define fin(_a, _b) for(int ss = 1; ss <= _a; ss ++ ) cin >> _b[ss];
#define fout(_a, _b, _c) for(int ss = 1; ss <= _a; ss ++ ) cout << _b[ss] << _c ;
using namespace std;

signed main()
{
    int a, b, s, max = 0, i, day = 0;
    fp(i, 1, 8, 1)
    {
        cin >> a >> b;
        s = a + b;
        if ((s > max) && (s > 8))
            max = s, day = i;
    }
    cout << day;
    return 0;
}