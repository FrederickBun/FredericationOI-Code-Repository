#include <iostream>
#define int long long
using namespace std;
int kr, x, y;
void fenz(int wx, int wy, int a, int b, int k);
signed main()
{
    cin >> kr >> x >> y;
    fenz(1, 1, x, y, kr);
    return 0;
}
void fenz(int wx, int wy, int a, int b, int k)
{
    if (k == 0)
        return;
    int lsa = 2 << (k - 2);
    if (k == 1)
        lsa = 1;
    int midx = wx + lsa;
    int midy = wy + lsa;
    if (a < midx && midy <= b)
    {
        printf("%d %d %d\n", midx, midy - 1, 1);
        fenz(wx, wy, midx - 1, midy - 1, k - 1);
        fenz(wx, midy, a, b, k - 1);
        fenz(midx, wy, midx, midy - 1, k - 1);
        fenz(midx, midy, midx, midy, k - 1);
    }
    else if (midx <= a && midy > b)
    {
        printf("%d %d %d\n", midx - 1, midy, 2);
        fenz(wx, wy, midx - 1, midy - 1, k - 1);
        fenz(wx, midy, midx - 1, midy, k - 1);
        fenz(midx, wy, a, b, k - 1);
        fenz(midx, midy, midx, midy, k - 1);
    }
    else if (a < midx && b < midy)
    {
        printf("%d %d %d\n", midx, midy, 3);
        fenz(wx, wy, a, b, k - 1);
        fenz(wx, midy, midx - 1, midy, k - 1);
        fenz(midx, wy, midx, midy - 1, k - 1);
        fenz(midx, midy, midx, midy, k - 1);
    }
    else if (midx <= a && midy <= b)
    {
        printf("%d %d %d\n", midx - 1, midy - 1, 4);
        fenz(wx, wy, midx - 1, midy - 1, k - 1);
        fenz(wx, midy, midx - 1, midy, k - 1);
        fenz(midx, wy, midx, midy - 1, k - 1);
        fenz(midx, midy, a, b, k - 1);
    }
}