#include <iostream>

using namespace std;

bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int daysFrom1970(int year, int month, int day) {
    int days = 0;
    for (int y = 1970; y < year; y++) {
        days += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        days += daysInMonth(year, m);
    }
    days += day - 1;
    return days;
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    cin >> year1 >> month1 >> day1;
    cin >> year2 >> month2 >> day2;

    int days1 = daysFrom1970(year1, month1, day1);
    int days2 = daysFrom1970(year2, month2, day2);

    cout << days2 - days1 << endl;

    return 0;
}
