#include <iostream>
#define int long long
using namespace std;

int m;
int arr[1000005];

int f(int x)
{
	if(arr[x] == 1) return 0;
	if(x == 1) return 1;
	if(x == 2) return 2;
	if(x == 3) return 4;
	return f(x - 1) + f(x - 2) + f(x - 3);
}

signed main()
{
	int n;
	cin >> n >> m ;
	for(int i = 1; i <= m; ++ i)
	{
		int a;
		cin >> a ;
		arr[a] = 1;
	}
	cout << f(n) ;
	return 0;
}
