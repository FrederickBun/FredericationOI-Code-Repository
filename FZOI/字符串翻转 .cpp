#include <iostream>
using namespace std;

int main()
{
	string str;
	string inpt;
	while(true)
	{
		cin >> inpt ;
		if(inpt == ".")
		{
			break;
		}
		inpt.append(1, ' ');
		str.insert(0, inpt);
	}
	cout << str ;
	return 0;
}