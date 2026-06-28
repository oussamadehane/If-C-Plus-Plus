#include <iostream>
#include <string>
using namespace std;

void ReadDate(int &Month, int &Day, int &Year) {
    cout << "Enter Month: "; cin >> Month;
    cout << "Enter Day: ";   cin >> Day;
    cout << "Enter Year (two digits): "; cin >> Year;
}

string CheckMagicDay(int Month, int Day, int Year) {
    if (Month * Day == Year) 
        return "It is a Magic Day!";
    else 
        return "Not a Magic Day.";
}

void PrintResult(string Result) {
    cout << Result << endl;
}

int main() {
    int Month, Day, Year;
    ReadDate(Month, Day, Year);
    PrintResult(CheckMagicDay(Month, Day, Year));
    return 0;
}
