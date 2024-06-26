#include<iostream>
using namespace std;  

int n, m, a[100010], ans, sum;
int main()
{
    cin >> n >> m;   
    for(int i = 1; i <= n; i ++ )
    cin >> a[i];
    for(int i = 1; i <= n; i ++ )
    {
        if(sum + a[i] < m) sum += a[i];
        else
        {
            ans ++ ;
            if(sum + a[i] > m) sum = a[i];
              else sum=0;
        }
    }
    ans += (sum > 0);
    cout << ans;
    return 0;  
}