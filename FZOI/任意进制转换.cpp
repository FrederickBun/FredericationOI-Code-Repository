#include <iostream>
#include <string>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if(n == 0)
    {
    	cout << 0 << endl << 0 << endl << 0 ;
    }
    
    if(n == 1)
    {
    	cout << 1 << endl << 1 << endl << 1 ;
    }

    string binary = "";
    long long temp = n;
    while (temp > 0) {
        binary = to_string(temp % 2) + binary;
        temp /= 2;
    }
    if(n < 0)
    {
    	cout << 1 << binary << endl;
    }
    else
    {
    	cout << binary << endl;
    }
    

    string octal = "";
    temp = n;
    while (temp > 0) {
        octal = to_string(temp % 8) + octal;
        temp /= 8;
    }
    cout << octal << endl;

    string hex = "";
    temp = n;
    while (temp > 0) {
        long long remainder = temp % 16;
        if (remainder < 10) {
            hex = to_string(remainder) + hex;
        } else {
            hex = static_cast<char>('A' + (remainder - 10)) + hex;
        }
        temp /= 16;
    }
    cout << hex << endl;

    return 0;
}