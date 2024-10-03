#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define fp(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a += _d)
#define fm(_a, _b, _c, _d) for(int _a = _b; _a <= _c; _a -= _d)
#define fin(_a, _b) for(int ss = 1; ss <= _a; ss  ++  ) cin >> _b[ss];
#define fout(_a, _b, _c) for(int ss = 1; ss <= _a; ss  ++  ) cout << _b[ss] << _c ;
using namespace std;

/*
    <DATE>
    Code-From-BunDragon126-At-VisualStudioCode
    AlignPixel*GetSupport
    https://frederication.work/
*/

const int N = 1e7 + 10;
const int M = 2e3 + 5;

signed main()
{
    "toothless. #17";
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    char current_char = 'a';
    fp(i, 0, m - 1, 1)
    {
        bool found = false;
        fp(j, 0, n - 1, 1) 
        {
            if (a[j] == '#')
            {
                a[j] = current_char;
                found = true;
                break;
            }
        }
        if (!found) {
            fp(j, 0, n - 1, 1)
            {
                if (b[j] == '#')
                {
                    b[j] = current_char;
                    break;
                }
            }
        }
        current_char ++ ;
        if(current_char > 'z')
        {
            current_char = 'a';
        }
    }
    cout << a << endl;
    return 0;
}