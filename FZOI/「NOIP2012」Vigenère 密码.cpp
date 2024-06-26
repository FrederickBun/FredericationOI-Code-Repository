#include<bits/stdc++.h>
using namespace std;

int k = -1;
string a, b;
int main(){
	cin >> b >> a;
	int lena = a.length(), lenb = b.length();
	for(int i = 0; i < lena; i ++ ){
		 ++ k;
		if(k == lenb) k -= lenb;
		char c = tolower(a[i]), d = tolower(b[k]);
		int x = (c - 'a') - (d - 'a');
		if(x < 0) x += 26;
		x ++ ;
		if(a[i] >= 'a' && a[i] <= 'z') printf("%c", x + 'a' - 1);
		else printf("%c", x + 'A' - 1);
	}
	return 0;
}
