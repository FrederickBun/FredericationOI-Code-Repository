#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int arr[1005];
int n;

signed main()
{
    for(int i = 1; i <= 3; i ++ )
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + 1 + 3);
    for(int i = 1; i <= 3; i ++ )
    {
        cout << arr[i] << " ";
    }
    return 0;
}