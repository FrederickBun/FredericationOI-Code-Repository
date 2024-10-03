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
    AlignPixel*GetSupport
    https://frederication.work/
*/

const int N = 1e7 + 10;
const int M = 2e3 + 5;

int calculateUniqueBloomTimes(vector<int>& times, int m, int offset = 0) {
    unordered_map<int, int> bloomCount;
    for (int t : times) {
        for (int i = 0; i < m; ++i) {
            bloomCount[t + offset + i]++;
        }
    }

    int uniqueBloomTimes = 0;
    for (auto& entry : bloomCount) {
        if (entry.second == 1) {
            uniqueBloomTimes++;
        }
    }

    return uniqueBloomTimes;
}

signed main()
{
    "toothless. #17";
    int n, m;
    cin >> n >> m;

    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    int maxUniqueBloomTimes = calculateUniqueBloomTimes(t, m);

    for (int i = 0; i < n; ++i) {
        int originalTime = t[i];
        for (int newTime = 1; newTime <= *max_element(t.begin(), t.end()) + m; ++newTime) {
            if (newTime != originalTime) {
                t[i] = newTime;
                maxUniqueBloomTimes = max(maxUniqueBloomTimes, calculateUniqueBloomTimes(t, m));
            }
        }
        t[i] = originalTime;
    }

    cout << maxUniqueBloomTimes << endl;
    return 0;
}