#include <iostream>
using namespace std;
int i, l;
string s;
int main(){
	getline(cin, s);
	for(i = 0; i < s.size(); i ++ ){
		if(s[i] != ' ') l ++ ;
	}
	cout << l;
}
