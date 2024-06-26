#include <iostream>
using namespace std;

int main()
{
	char ch;
	int space = 0;
	while(ch != '\n')
	{
		ch = getchar();
		if(ch == ' ' && space == 0)
		{
			putchar(ch);
			space = 1;
		}
		if(ch != ' ')
		{
			space = 0;
			putchar(ch);
		}
	}
	return 0;
}