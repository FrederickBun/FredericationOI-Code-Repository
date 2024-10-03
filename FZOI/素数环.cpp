#include <bits/stdc++.h>
using namespace std;

const int MAXN = 16;
int n;
int arr[MAXN];
bool vis[MAXN];

// 判断一个数是否为素数
bool check(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// 回溯
// cur表示当前位置
void back(int cur)
{
    if (cur == n)  // 检查最后一个数字和第一个数字之和是否为素数
    {
        if (check(arr[0] + arr[n - 1]))
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i] && check(arr[cur - 1] + i))
        {
            vis[i] = true;
            arr[cur] = i;
            back(cur + 1);
            vis[i] = false;
        }
    }
}

int main()
{
    cin >> n;
    memset(vis, false, sizeof(vis));
    vis[1] = true;
    arr[0] = 1;
    back(1);
    return 0;
}

/*
以下题解为后期由本人添加
题目分析：
题目要求将整数 1 到 n 组成一个环，使得相邻的两个整数之和均为素数。
我们需要找到所有满足条件的素数环，并按照要求输出。
由于 n 的值不超过 16，我们可以使用回溯法来尝试所有可能的组合。
代码解释：
check函数用于判断一个数是否为素数。
back函数是回溯函数，用于尝试放置数字到环中。
在back函数中，首先判断是否已经放置了 n 个数字。如果是，则检查最后一个数字和第一个数字之和是否为素数。如果是素数，则输出这个环。
然后，从数字 2 到 n 依次尝试将每个数字放在环的下一个位置。如果该数字没有被使用过，并且与前一个数字之和为素数，就将其放在环的下一个位置，并标记为已使用，然后继续递归放置下一个数字。
如果放置过程中出现相邻两个数字之和不是素数的情况，就回溯到上一个数字，重新选择下一个数字。
在main函数中，读取输入的 n，初始化标记数组和环的第一个数字，然后调用back函数从数字 1 开始回溯。
时间复杂度和空间复杂度：
时间复杂度：由于需要尝试所有可能的组合，时间复杂度为 O(n!)，其中 n 是输入的数字个数。
空间复杂度：主要是使用了标记数组和环数组，空间复杂度为 O(n)。
*/