#include<iostream>

using namespace std;
typedef long long LL;
typedef pair<int ,string> PII;
#define x first
#define y second
const int N = 1e4+10;
const int mod = 100000007;

int main(){
    int a[10];
    for(int i = 0; i < 7; i ++ )
        cin >> a[i];
    sort(a, a+7);
    printf("%d %d %d",a[0],a[1],a[6]-a[0]-a[1]);
    return 0;
}


