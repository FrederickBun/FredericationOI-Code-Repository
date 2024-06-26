#include <iostream>
#include <vector>
#include <string>
#define int long long

using namespace std;

int m, cnt = 0;

void f(int n, vector<int>& vt, int start) {
    if (n == 0) {
        cout << m << "=" << vt[0];
        for (int i = 1; i < vt.size(); i++) {
            cout << "+" << vt[i];
        }
        cout << endl ;
        cnt ++ ;
    } else {
        for (int i = start; i >= 1; i--) {
            if (n >= i) {
                vt.push_back(i);
                f(n - i, vt, i);
                vt.pop_back();
            }
        }
    }
}

signed main() {
    cin >> m;

    vector<int> vt;
    f(m, vt, m - 1);

    cout << "total=" << cnt << endl;

    return 0;
}
