#include<bits/stdc++.h>
using namespace std;
const int maxn = 5005;
int s[maxn][maxn]; 
int main(){
    ios::sync_with_stdio(false);
    int n,r;
    cin>>n>>r;
    int xx=r,yy=r;
    for(int i=1;i<=n;i++){
        int x,y,w;
        cin>>x>>y>>w;
        x++,y++;
        s[x][y]+=w;
        xx=max(xx,x);
        yy=max(yy,y);
    }
    for(int i=1;i<=xx;i++)
        for(int j=1;j<=yy;j++)
            s[i][j]+=s[i-1][j]+s[i][j-1]-s[i-1][j-1];
    int ans=0;        
    for(int i=r;i<=xx;i++)
    for(int j=r;j<=yy;j++)
        ans=max(ans,s[i][j]-s[i-r][j]-s[i][j-r]+s[i-r][j-r]);
    cout<<ans;
    return 0;
}
