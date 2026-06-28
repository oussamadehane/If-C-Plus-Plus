#include <iostream>
using namespace std;

enum EnAdult { Yes = 1, No = 0 };



short ReadAge() {
    int Age = 0;
    do {
        cout << "Enter The Year: ";
        cin >> Age;
    } while (Age <= 0 || Age >= 150);
    return Age;
}

bool CheckAge(int Age) {
    if (Age < 18)
        return EnAdult::No;
    else
        return EnAdult::Yes;
}

void PrintLeapYear(int Age) {
    if (CheckAge(Age) == EnAdult::Yes)
        cout << "your Age is : "<< Age << " Then you can Vote ." << endl;
    else
        cout << "your Age is : " << Age << " Then you can't Vote ." << endl;
}

int main() {
    PrintLeapYear(ReadAge());
    return 0;
}
