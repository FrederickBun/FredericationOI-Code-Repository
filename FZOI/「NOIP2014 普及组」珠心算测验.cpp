#include<iostream>
using namespace std;

bool a[20010];
int b[20010];
int main()
{
	int n, x, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> x;
		a[x] = 1;
	}
	for(int i = 1; i <= 10000; i ++ )
	{
		if(a[i] == 1)
		{ 
			for(int j = i + 1; j <= 10000; j ++ )
			{
				if(a[j] == 1 && a[i + j] == 1)
				b[i + j] ++ ;
			}
		}
	}
	for(int i = 1; i <= 20010; i ++ )
	{
		if(b[i] >= 1)
		sum ++ ;
	}
	cout << sum;
	return 0;
}