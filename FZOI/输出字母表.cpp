#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 26; ++ i)
	{
		cout << (char)(65 + i - 1) << " ";
		if(i % 6 == 0)
		{
			cout << endl ;
		}
	}
	cout << endl ;
	for(int i = 26; i >= 1; -- i)
	{
		cout << (char)(97 + i - 1) << " ";
		if(i % 6 == 0)
		{
			cout << endl ;
		}
	}
}	