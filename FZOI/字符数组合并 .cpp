#include <iostream>
using namespace std;

int arr[100005];

int main()
{
	int cnt = 0;
	char ch;
	while(cnt < 2)
	{
		ch = getchar();
		
		if(ch == '.')
		{
			cnt ++ ;
		}
		if(ch >= 'a' && ch <= 'z')
		{
			arr[ch] ++ ;
		}
	}
	for(int i = 97; i <= 121; ++ i)
	{
		for(int j = 1; j <= arr[i]; ++ j)
		{
			cout << (char)i ;
		}
	}
	return 0;
}