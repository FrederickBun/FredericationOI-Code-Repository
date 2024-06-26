#include<cstdio>
using namespace std;
const int MAXN = 100010;

int n, m;
struct TOY{
    int pos;
    char name[100];
};
TOY toy[MAXN];

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i ++ ) scanf("%d%s", &toy[i].pos, &toy[i].name);
    int now = 1;
    int zy, s;
    for (int i = 1; i <= m; i ++ )
    {
        scanf("%d%d", &zy, &s);
        if ((toy[now].pos == 0 && zy == 1) || (toy[now].pos == 1 && zy == 0))
        {
            now += s;
            if (now > n) now = now % n;
        }
        else
        {
            now -= s;
            if (now <= 0) now = n + now;
        }
    }
    printf("%s", toy[now].name);
    return 0;
}