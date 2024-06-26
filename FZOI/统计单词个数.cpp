#include <iostream>
using namespace std;

int main()
{
	char ch;
	int cnt = 1;
	while(ch != '.')
	{
		ch = getchar();
		if(ch == ' ')
		{
			cnt ++ ;
		}
	}
	cout << cnt ;
	return 0;
}