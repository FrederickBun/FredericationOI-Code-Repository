#include<cstdio>

const int N = 1e2+5;

int n,m,now=0;
int tem[3][N];

bool check(void){
    for(int i=0;i<n;++i){
        int t=tem[0][i],l=tem[1][i],h=tem[2][i];
        for(;now<=t;++now){
            if(m<l)++m;
            if(m>h)--m;
            if(now==t&&(m<l||m>h))return false;
            if(m>=l&&m<=h&&i!=n-1){
                if(m<tem[1][i+1]&&m<h) ++m;
                if(m>tem[2][i+1]&&m>l) --m;
            }
        }
    }
    return true;
}

signed main(void){
    scanf("%d%d",&n,&m);
    for(int j=0;j<n;++j){
        for(int i=0;i<3;++i){
            scanf("%d",&tem[i][j]);
        }
    }
    bool flag = check();
    printf("%d\n",flag?1:0);
    return 0;
}