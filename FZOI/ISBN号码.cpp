#include<iostream>	
using namespace std;
char s[13];
int main()
{
	int sum;
	for (int i = 0; i < 13; i++)
	{
		cin >> s[i];
	}

	sum = (s[0] - '0') * 1 + (s[2] - '0') * 2 + (s[3] - '0') * 3 + (s[4] - '0') * 4 + (s[6] - '0') * 5 + (s[7] - '0') * 6 + (s[8] - '0') * 7 + (s[9] - '0') * 8 + (s[10] - '0') * 9;//求和

	if (sum % 11 == s[12] - '0' || (sum % 11 == 10 && s[12] == 'X'))
	{
		cout << "Right";
	}
	else
	{
		for (int i = 0; i < 12; i++)
		{
			cout << s[i];
		}
		if (sum % 11 == 10)
		{
			cout << 'X';
		}
		else
		{
			cout << sum % 11;
		}

	}

	return 0;
}
