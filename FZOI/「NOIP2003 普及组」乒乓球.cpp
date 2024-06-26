#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long i, k = 0, w = 0, l = 0, w1 = 0, l1 = 0, a[100000], b[100000];
char t;
int main()
{
	while(t != 'E')
	{
		cin >> t;
		if(t == 'W')
		{
			w ++ ;
			w1 ++ ;
		}
		else if(t == 'L')
		{
			l ++ ;
			l1 ++ ;
		}
		if((w >= 11 || l >= 11) && abs(w - l) > 1)
		{
			cout << w << ":" << l << endl;
			w = 0;
			l = 0;
		}
		if((w1 >= 21 || l1 >= 21) && abs(w1 - l1) > 1)
		{
			k ++ ;
			a[k] = w1;
			b[k] = l1;
			w1 = 0;
			l1 = 0;
		}
	}
	cout << w << ":" << l << endl << endl;
	for (i=1;i<=k;i++)
		cout << a[i] << ":" << b[i] << endl;
	cout << w1 << ":" << l1;
	return 0;
}