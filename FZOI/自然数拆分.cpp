#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(int n, int r, vector<int>& vt, int start, int count) {
    if (count == 0) {
        for (int i = 0; i < vt.size(); i ++ ) {
            cout << vt[i];
        }
        cout << endl;
    }
    else {
        for (int i = start; i >= r; i--) {
            vt.push_back(i);
            f(n, r - 1, vt, i - 1, count - 1);
            vt.pop_back();
        }
    }
}

int main() {
    int n, r;
    cin >> n >> r;

    vector<int> vt;
    f(n, r, vt, n, r);

    int t = 1;
    for (int i = n; i > n - r; i--) {
        t *= i;
    }
    for (int i = 2; i <= r; i++) {
        t /= i;
    }

    cout << "total=" << t << endl;

    return 0;
}
