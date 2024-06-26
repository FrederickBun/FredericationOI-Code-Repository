#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i ++ ){
        if((s[i] == 'n' || s[i] == 'N') && (s[i+1] == 'o' || s[i + 1] == 'O') && (s[i + 2] == 'i' || s[i + 2] == 'I') && (s[i + 3] == 'P' || s[i + 3] == 'p'))
        {
            cout << "CSP";
            i += 3;
             
        }
        else
            cout << s[i];
    }
    return 0;
}