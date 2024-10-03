#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int N = 20005;

int n, heap[N], size;

void put(int t) 
{
	int p1, p2;
	heap[ ++ size] = t;
	p1 = size;
	while(p1 > 1)
	{
		p2 = p1 / 2;
		if(heap[p1] >= heap[p2]) return ;
		swap(heap[p1], heap[p2]);
		p1 = p2;
	}
}

int out()
{
	int p = 1, g, ans;
	ans = heap[1];
	heap[1] = heap[size -- ];
	while(p * 2 <= size)
	{
		g = p * 2;
		if(g < size && heap[g + 1] < heap[g]) g ++ ;
		if(heap[p] <= heap[g]) return ans;
		swap(heap[p], heap[g]);
		p = g;
	}
	return ans;
}

signed main()
{
	int ans = 0;
	cin >> n ;
	for(int i = 1; i <= n; ++ i)
	{
		int q;
		cin >> q ;
		put(q);
	}
	size = n;
	while(size > 1)
	{
		int x = out(), y = out();
		ans += (x + y);
		put(x + y);
	}
	cout << ans ;
	return 0;
}