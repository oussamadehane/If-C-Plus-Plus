#include <iostream>
using namespace std;

enum EnLeapYear { LeapYear = 1, NotLeapYear = 0 };

int ReadYear() {
    int Year = 0;
    cout << "Enter The Year: ";
    cin >> Year;
    return Year;
}

bool CheckLeapYear(int Year) {
    if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0))
        return EnLeapYear::LeapYear;
    else
        return EnLeapYear::NotLeapYear;
}

void PrintLeapYear(int Year) {
    if (CheckLeapYear(Year) == EnLeapYear::LeapYear)
        cout << Year << " is a Leap Year." << endl;
    else
        cout << Year << " is NOT a Leap Year." << endl;
}

int main() {
    PrintLeapYear(ReadYear());
    return 0;
}
