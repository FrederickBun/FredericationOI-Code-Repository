#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums;

    for (int i = 0; i < n; ++i)
    {
        char op;
        cin >> op;

        if (op == 'I')
        {
            int num;
            cin >> num;
            nums.push_back(num);
        }
        else if (op == 'Q')
        {
            if (nums.size() >= k)
            {
                sort(nums.begin(), nums.end(), greater<int>());
                cout << nums[k - 1] << endl;
            }
        }
    }

    return 0;
}