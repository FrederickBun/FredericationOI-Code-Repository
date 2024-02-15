#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int t;
int main()
{
    cin >> t;
    while(t -- )
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int x = 0, y = 0;
        for(int i = 0; i < n; i ++ )
        {
            if(s1[i] == '1' && s2[i] == '0') x ++ ;
            if(s1[i] == '0' && s2[i] == '1') y ++ ;
        }
        cout << max(x, y) << endl;
    }
    return 0;
}
