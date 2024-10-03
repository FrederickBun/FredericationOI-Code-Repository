#include <iostream>
#include <string>

using namespace std;

bool isIncreasingNumber(int n) {
    string num = to_string(n);
    for (int i = 0; i < num.size() - 1; i++) {
        if (num[i] > num[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 10; i <= n; i++) {
        if (isIncreasingNumber(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
