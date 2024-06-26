#include <iostream>
using namespace std;

int main()
{
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3 ;
	string s;
	cin >> s ;
	for(int i = 0; i < s.size(); ++ i)
	{
		if(s[i] == '-')
		{
			if(s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9' && s[i + 1] > s[i - 1])
			{
				if(p1 != 3)
				{
					if(p3 == 1)
					{
						for(int j = 1; j < s[i + 1] - s[i - 1]; ++ j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j) ;
							}
						}
					}
					else if(p3 == 2)
					{
						for(int j = s[i + 1] - s[i - 1] - 1; j >= 1; -- j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j) ;
							}
						}
					}
				}
				else
				{
					for(int j = 1; j < s[i + 1] - s[i - 1]; ++ j)
					{
						for(int k = 1; k <= p2; ++ k)
						{
							cout << '*' ;
						}
					}
				}
			}
			else if(s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z' && s[i + 1] > s[i - 1])
			{
				if(p1 == 1)
				{
					if(p3 == 1)
					{
						for(int j = 1; j < s[i + 1] - s[i - 1]; ++ j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j) ;
							}
						}
					}
					else if(p3 == 2)
					{
						for(int j = s[i + 1] - s[i - 1] - 1; j >= 1; -- j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j) ;
							}
						}
					}
				}
				else if(p1 == 2)
				{
					if(p3 == 1)
					{
						for(int j = 1; j < s[i + 1] - s[i - 1]; ++ j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j - 32) ;
							}
						}
					}
					else if(p3 == 2)
					{
						for(int j = s[i + 1] - s[i - 1] - 1; j >= 1; -- j)
						{
							for(int k = 1; k <= p2; ++ k)
							{
								cout << (char)(s[i - 1] + j - 32) ;
							}
						}
					}
				}
				else
				{
					for(int j = 1; j < s[i + 1] - s[i - 1]; ++ j)
					{
						for(int k = 1; k <= p2; ++ k)
						{
							cout << '*' ;
						}
					}
				}
				
			}
			else
			{
				cout << s[i] ;
			}
		}
		else
		{
			cout << s[i] ;
		}
	}
	return 0;
}