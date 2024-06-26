#include <bits/stdc++.h>

using namespace std;
const int N = 10;
char g[N][N];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            cin >> g[i][j];
    int x1, y1, x2, y2;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (g[i][j] == 'C') x1 = i, y1 = j;
            if (g[i][j] == 'F') x2 = i, y2 = j;
        }
    }
    int cd = 0, fd = 0;
    int cnt = 0;
    while (true) {
        if (x1 + dx[cd] >= 10 || x1 + dx[cd] < 0 || y1 + dy[cd] >= 10 || y1 + dy[cd] < 0 || g[x1 + dx[cd]][y1 + dy[cd]] == '*') cd = (cd + 1) % 4; 
        else x1 += dx[cd], y1 += dy[cd];
        if (x2 + dx[fd] >= 10 || x2 + dx[fd] < 0 || y2 + dy[fd] >= 10 || y2 + dy[fd] < 0 || g[x2 + dx[fd]][y2 + dy[fd]] == '*') fd = (fd + 1) % 4;
        else x2 += dx[fd], y2 += dy[fd];
        cnt++;
        if(x1 == x2 && y1 == y2)
        {
            cout << cnt << endl;
            break;
        }
        if (cnt > 1000000)
        {
            cout << 0 << endl;
            break;
        }
    }
    return 0;
}