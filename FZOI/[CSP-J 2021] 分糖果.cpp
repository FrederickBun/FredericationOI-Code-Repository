#include <iostream>
using namespace std;
int main()
{
    int n, L, R;
    cin >> n >> L >> R;
    if(R / n > L / n) cout << n - 1 << endl;
    else cout << R % n << endl;
    return 0;
}