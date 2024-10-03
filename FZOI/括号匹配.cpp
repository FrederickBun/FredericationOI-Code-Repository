#include <bits/stdc++.h>
#define int long long
using namespace std;

bool f(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '[')
        {
            st.push(c);
        }
        else if (c == ')' || c == ']')
        {
            if (st.empty())
            {
                return false;
            }

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') || (c == ']' && top != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

signed main()
{
    string s;
    cin >> s;

    if (f(s))
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}