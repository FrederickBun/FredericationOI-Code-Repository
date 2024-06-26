#include <iostream>

using namespace std;

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
        	if(i * i != n)
        	{
        		sum += i;
            	sum += n / i;
        	}
            else{
            	sum += i;
            }
        }
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        for(int j = 2; j <= N; ++ j)
        {
        	if(sumOfDivisors(i) == j && sumOfDivisors(j) == i && i != j)
        	{
        		cout << i << " " << j << endl ;
        	}
        }
    }

    return 0;
}
