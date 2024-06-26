#include <iostream>
using namespace std;

char letter[10005] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
	int n, m;
	cin >> n >> m ;
	for(int i = 1; i <= n; ++ i)
	{
		for(int j = 1; j <= m; ++ j)
		{
			string a;
			cin >> a ;
			if(a == "snuke")
			{
				cout << letter[j - 1] << i ;
			}
		}
	}
	return 0;
}