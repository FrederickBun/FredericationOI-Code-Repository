#include <iostream>
using namespace std;

int n, a[30], j, k;
int main(){
	cin >> n;
	if(n % 2 == 1) cout << -1;
	else{
		for(int i = n; i != 0; i /= 2){
			j ++ ;
			a[j] = i % 2;
		}
		k = j - 1;
		for(int i = j; i >= 1; i -- ){
			long long s = pow(2, k);
			if(a[i] != 0) cout << s << " " ;
			k -- ;
		}
	}
    return 0;
}
