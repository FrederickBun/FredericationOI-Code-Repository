#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 100;
const vector<pair<int, int>> knight_moves = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
const vector<pair<int, int>> elephant_moves = {{2, 2}, {2, -2}, {-2, 2}, {-2, -2}};

int bfs(int start_x, int start_y)
{
    vector<vector<bool>> vis(N + 1, vector<bool>(N + 1, false));
    queue<tuple<int, int, int>> que;
    que.push({start_x, start_y, 0});
    vis[start_x][start_y] = true;

    while (!que.empty())
    {
        auto [x, y, steps] = que.front();
        que.pop();

        if (x == 1 && y == 1)
        {
            return steps;
        }
        for (const auto &move : knight_moves)
        {
            int nx = x + move.first;
            int ny = y + move.second;
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                que.push({nx, ny, steps + 1});
            }
        }

        for (const auto &move : elephant_moves)
        {
            int nx = x + move.first;
            int ny = y + move.second;
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                que.push({nx, ny, steps + 1});
            }
        }
    }

    return -1; 
}

signed main()
{
    int x, y, x1, y1;
    cin >> x >> y >> x1 >> y1;

    int steps_A = bfs(x, y);
    int steps_B = bfs(x1, y1);

    cout << steps_A << endl;
    cout << steps_B << endl;

    return 0;
}