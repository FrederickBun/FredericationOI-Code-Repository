#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define fp(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a += _d)
#define fm(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a -= _d)
#define fin(_a, _b) for(int ss = 1; ss <= _a; ss ++ ) cin >> _b[ss];
#define fout(_a, _b, _c) for(int ss = 1; ss <= _a; ss ++ ) cout << _b[ss] << _c ;
using namespace std;

/*
    2024/08/03
    Code-From-BunDragon126-At-VisualStudioCode
    AlignPixel*GiveSupport
    https://frederication.work/
*/

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int t, n, m, k, a[N];

signed main()
{
    "toothless. #17";
    cin >> t;
    fp(ss, 1, t, 1)
    {
        cin >> n >> m ;
        if(m % 2 == 0)  // 如果  m  是偶数且  n  为  0 ，输出 Yes。否则输出 No。
        {
            if(n == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else  // 如果  m  是奇数且  n  为正整数，输出 Yes 。否则输出 No。
        {
            if(n > 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}