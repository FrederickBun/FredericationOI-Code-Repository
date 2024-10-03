#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int N = 10001005;

int n, q, l, r, mid, x, sum, ma, ans[N], o, cnt, cnt1;
map<int, int> m;

// 结构体node用于存储线段树的节点信息
struct node {
    int l, r, len, lc, rc;  // l和r表示区间左右边界, len表示区间内岛屿的数量, lc和rc表示区间左右端点的类别
} a[N];

// 结构体deno用于存储高度信息
struct deno {
    int x, id;  // x表示高度, id表示高度对应的位置索引
} c[N];

// 结构体w用于存储查询信息
struct w {
    int l, r, x, id;  // l和r表示查询区间, x表示海平面上升高度, id表示查询的索引
} b[N];

// 更新节点信息函数
void gx(int p) {
    a[p].len = a[p * 2].len + a[p * 2 + 1].len;  // 合并左右子区间的岛屿数量
    if (a[p * 2].rc == a[p * 2 + 1].lc)  // 如果左右子区间的连接处高度相同，岛屿数量减少1
        a[p].len--;
    a[p].lc = a[p * 2].lc;  // 更新左端点类别
    a[p].rc = a[p * 2 + 1].rc;  // 更新右端点类别
}

// 构建线段树函数
void build(int p, int l, int r) {
    a[p].l = l;
    a[p].r = r;
    if (l == r) {  // 叶子节点
        a[p].len = a[p].lc = a[p].rc = 1;  // 初始化为长度为1的岛屿
        return;
    }
    int mid = (l + r) / 2;
    build(p * 2, l, mid);  // 递归构建左子树
    build(p * 2 + 1, mid + 1, r);  // 递归构建右子树
    gx(p);  // 更新当前节点信息
}

// 更新线段树函数
void change(int p, int l, int r) {
    if (l <= a[p].l && a[p].r <= r) {  // 完全覆盖
        a[p].len = 0;  // 将区间内的长度设置为0
        a[p].lc = a[p].rc = ++cnt1;  // 更新类别
        return;
    }
    int mid = (a[p].l + a[p].r) / 2;
    if (l <= mid) change(p * 2, l, r);  // 递归更新左子树
    if (mid < r) change(p * 2 + 1, l, r);  // 递归更新右子树
    gx(p);  // 更新当前节点信息
}

// 查询线段树函数
int ask(int p, int l, int r) {
    if (l <= a[p].l && a[p].r <= r)  // 完全覆盖
        return a[p].len;
    int mid = (a[p].l + a[p].r) / 2;
    int ans1 = 0;
    if (l <= mid && mid < r) {  // 跨区间查询
        ans1 = ask(p * 2, l, r) + ask(p * 2 + 1, l, r);  // 查询左右子树
        if (a[p * 2].rc == a[p * 2 + 1].lc)  // 如果左右子树的连接处高度相同，岛屿数量减少1
            ans1--;
    } else if (l <= mid) {  // 查询左子区间
        ans1 = ask(p * 2, l, r);
    } else if (mid < r) {  // 查询右子区间
        ans1 = ask(p * 2 + 1, l, r);
    }
    return ans1;
}

// 比较函数，用于排序查询
bool cmp(w x, w y) {
    return x.x < y.x;
}

// 比较函数，用于排序高度
bool cmp1(deno x, deno y) {
    return x.x < y.x;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    cnt1 = n + 1;
    for (int i = 1; i <= n; i++) {
        cin >> c[i].x;
        c[i].id = i;
    }
    sort(c + 1, c + 1 + n, cmp1);  // 按高度排序
    for (int i = 1; i <= q; i++) {
        cin >> b[i].l >> b[i].r >> b[i].x;
        b[i].id = i;
    }
    sort(b + 1, b + 1 + q, cmp);  // 按海平面上升高度排序
    cnt = 1;
    build(1, 1, n);  // 构建线段树
    for (int i = 1; i <= q; i++) {
        while (cnt <= n && c[cnt].x <= b[i].x) {
            change(1, c[cnt].id, c[cnt].id);  // 更新线段树
            cnt++;
        }
        ans[b[i].id] = ask(1, b[i].l, b[i].r);  // 查询岛屿数量
    }
    for (int i = 1; i <= q; i++) {
        cout << ans[i] << endl;  // 输出结果
    }
    return 0;
}