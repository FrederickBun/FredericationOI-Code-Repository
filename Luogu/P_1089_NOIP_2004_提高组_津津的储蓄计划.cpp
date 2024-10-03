#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define fp(_a, _b, _c, _d) for (int _a = _b; _a <= _c; _a += _d)
#define fm(_a, _b, _c, _d) for (int _a = _b; _a <= _c; _a -= _d)
#define fin(_a, _b) for (int ss = 1; ss <= _a; ss++) cin >> _b[ss];
#define fout(_a, _b, _c) for (int ss = 1; ss <= _a; ss++) cout << _b[ss] << _c;
using namespace std;

/*
    @author: BunDragon126
    @link: https://www.setbun.com/
*/

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int arr[N];

signed main()
{
    "toothless. #17";
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    int money = 0;
    int l = 0;

    for (int i = 0; i < 12; i++)
    {
        money += 300;
        if (money < arr[i])
        {
            cout << -(i + 1) << endl;
            return 0;
        }
        money -= arr[i];
        int c = (money / 100) * 100;
        l += c;
        money -= c;
    }
    cout << money + l * 1.2 << endl;
    return 0;
}
