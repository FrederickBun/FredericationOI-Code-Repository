#include <bits/stdc++.h>
using namespace std;
const int MAXN = 200 + 10;
int n, na, nb, a[MAXN], b[MAXN], cnta, cntb;
int vs[5][5] = {{0, 0, 1, 1, 0}, {1, 0, 0, 1, 0}, {0, 1, 0, 0, 1}, {0, 0, 1, 0, 1}, {1, 1, 0, 0, 0}};
int main()
{
    cin >> n >> na >> nb;
    for(int i = 0; i < na; i++) cin >> a[i];
    for(int i = 0; i < nb; i++) cin >> b[i];
    for(int i = 0; i < n; i++)
    {
        cnta += vs[a[i % na]][b[i % nb]];
        cntb += vs[b[i % nb]][a[i % na]];
    }
    cout << cnta << " " << cntb << endl;
    return 0;
}