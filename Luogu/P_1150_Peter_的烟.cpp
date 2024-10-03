#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define fp(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a += _d)
#define fm(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a -= _d)
#define fin(_a, _b) for(int ss = 1; ss <= _a; ss ++ ) cin >> _b[ss];
#define fout(_a, _b, _c) for(int ss = 1; ss <= _a; ss ++ ) cout << _b[ss] << _c ;
using namespace std;

/*
    @author: BunDragon126
    @link: https://www.setbun.com/
*/

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int n, k;

signed main()
{
    "toothless. #17";
    cin >> n >> k ;
    int cnt = 0;
    fp(i, 1, n, 1)
    {
        cnt ++ ;
        if(cnt % k == 0) n ++ ;
    }
    cout << cnt ;
    return 0;
}