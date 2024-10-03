#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int s, n, m, step;
};

bool vis[101][101][101];

int bfs(int s, int n, int m)
{
    queue<Node> que;
    Node init = {s, 0, 0, 0};
    que.push(init);
    vis[s][0][0] = true;

    while (!que.empty())
    {
        Node cur = que.front();
        que.pop();

        if (cur.s == cur.n && cur.s == cur.m)
        {
            return cur.step;
        }

        if (cur.s > 0 && cur.n < n)
        {
            int pour = min(cur.s, n - cur.n);
            int newS = cur.s - pour;
            int newN = cur.n + pour;
            if (!vis[newS][newN][cur.m])
            {
                vis[newS][newN][cur.m] = true;
                Node next = {newS, newN, cur.m, cur.step + 1};
                que.push(next);
            }
        }

        if (cur.s > 0 && cur.m < m)
        {
            int pour = min(cur.s, m - cur.m);
            int newS = cur.s - pour;
            int newM = cur.m + pour;
            if (!vis[newS][cur.n][newM])
            {
                vis[newS][cur.n][newM] = true;
                Node next = {newS, cur.n, newM, cur.step + 1};
                que.push(next);
            }
        }

        if (cur.n > 0 && cur.s < s)
        {
            int pour = min(cur.n, s - cur.s);
            int newS = cur.s + pour;
            int newN = cur.n - pour;
            if (!vis[newS][newN][cur.m])
            {
                vis[newS][newN][cur.m] = true;
                Node next = {newS, newN, cur.m, cur.step + 1};
                que.push(next);
            }
        }

        if (cur.n > 0 && cur.m < m)
        {
            int pour = min(cur.n, m - cur.m);
            int newN = cur.n - pour;
            int newM = cur.m + pour;
            if (!vis[cur.s][newN][newM])
            {
                vis[cur.s][newN][newM] = true;
                Node next = {cur.s, newN, newM, cur.step + 1};
                que.push(next);
            }
        }

        if (cur.m > 0 && cur.s < s)
        {
            int pour = min(cur.m, s - cur.s);
            int newS = cur.s + pour;
            int newM = cur.m - pour;
            if (!vis[newS][cur.n][newM])
            {
                vis[newS][cur.n][newM] = true;
                Node next = {newS, cur.n, newM, cur.step + 1};
                que.push(next);
            }
        }

        if (cur.m > 0 && cur.n < n)
        {
            int pour = min(cur.m, n - cur.n);
            int newM = cur.m - pour;
            int newN = cur.n + pour;
            if (!vis[cur.s][newN][newM])
            {
                vis[cur.s][newN][newM] = true;
                Node next = {cur.s, newN, newM, cur.step + 1};
                que.push(next);
            }
        }
    }

    return -1;
}

int main()
{
    int s, n, m;
    while (cin >> s >> n >> m && !(s == 0 && n == 0 && m == 0))
    {
        memset(vis, false, sizeof(vis));
        int res = bfs(s, n, m);
        if (res == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }

    return 0;
}