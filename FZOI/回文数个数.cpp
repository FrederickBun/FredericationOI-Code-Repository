#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
