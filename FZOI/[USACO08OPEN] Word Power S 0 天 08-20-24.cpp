#include<iostream>
using namespace std;

int n, m, tot[1001];
string nx[1001], en[101];

int f(string nn,string ee)
{
    int now = -1;
    string::size_type po = 0; 
    for(int i = 0; i < ee.size(); i++)
    {
        po = nn.find(ee[i], now+1);
        if(po == nn.npos)return 0;
        now = po;
    }
    return 1;
}

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i ++ )
    {
        cin >> nx[i];
        for(int j = 0; j < nx[i].size(); j ++ )
        {
        	if(nx[i][j] > 96) nx[i][j] -= 32;
        }
    }
    for(int i = 1; i <= m; i ++ ) 
    {
        cin >> en[i];
        for(int j = 0; j < en[i].size(); j ++ )
        {
        	if(en[i][j] > 96) en[i][j] -= 32;
        }
        
        for(int j = 1; j <= n; j ++ )
        {
            if(f(nx[j], en[i])) tot[j] ++ ;
        }
    }
    for(int i = 1; i <= n; i ++ ) cout << tot[i] << endl;
}
