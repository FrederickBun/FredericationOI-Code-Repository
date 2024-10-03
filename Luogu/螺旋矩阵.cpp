#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
signed main()
{
    int n, x, y;
    cin >> n >> x >> y ;
    int rx = 1, num = y;  // rx为模拟到的行数，num为目前加到的数，也是最终输出的结果
    int up = 1, down = n, zuo = 1, you = n;  // x、y在下一次绕圈时上下左右的边界值（可以理解为将要被蛇形填数的一圈的边界）
    bool fx = true;  // 方向（true往下，false往上）
    while (rx != x)  // 一直模拟到刚好到达
    {
        if (fx)  // 特判
        {
            if (you == y)  // 如果是往下走直线
            {
                num += x - rx;  // 加上最后的数
                break;
            }
        }
        else
        {
            if (zuo == y)  // 如果是向上走直线
            {
                num += rx - x;
                break;
            }
        }
        if (fx) // 普通情况，如果向下走
        {
            num += (you - y + 1) * 2 + down - rx - 2;  // 绕一圈
            rx = down;  // 更新所在的行
            you -- ;  // 右边界往回退一格
            up ++ ;  // 上边界往回退一格
        }
        else // 往上走
        {
            num += (y - zuo + 1) * 2 + rx - up - 2;  // 绕一圈
            rx = up;  // 更新行
            zuo  ++  ;  // 左边界向内
            down -- ;  // 下边界向内
        }
        fx = !fx;  // 方向调转
    }
    cout << num ;
    return 0;
}