#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x, n; 
	cin >> x >> n;
	long long week;
	week = (x + n) / 7 * 2;
	cout << (n - week) * 250;
	return 0; 
}