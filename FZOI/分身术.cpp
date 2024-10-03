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

int n, k;
vector<int> a(N), b(N);
deque<int> deque1, deque2;

signed main()
{
    "toothless. #17";
    cin >> n >> k;              
    for (int i = 0; i < n; ++ i) cin >> a[i];
    for (int i = 0; i < n; ++ i) cin >> b[i];
    int mn = n + 1;
    for (int l = 0, r = 0; r < n; ++ r)
    {
        while (!deque1.empty() && a[deque1.back()] >= a[r])
            deque1.pop_back();
        deque1.push_back(r);
        while (!deque2.empty() && b[deque2.back()] <= b[r])
            deque2.pop_back();
        deque2.push_back(r);
        while (a[deque1.front()] <= k && b[deque2.front()] > a[deque1.front()])
        {
            mn = min(mn, r - l + 1);
            if (deque1.front() == l)
                deque1.pop_front();
            if (deque2.front() == l)
                deque2.pop_front();
            ++ l;
        }
    }
    if (mn == n + 1)
    {
        cout << "So Sad!" << endl;
    }
    else
    {
        cout << mn << endl;
    }
    return 0;
}