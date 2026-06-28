#include <iostream>
#include <string>
using namespace std;

int ReadNumberInRange(int From, int To) {
    int Number;
    do {
        cout << "Please enter a number between " << From << " and " << To << ": ";
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

string GetRomanNumeral(int Number) {
    switch (Number) {
        case 1: return "I";
        case 2: return "II";
        case 3: return "III";
        case 4: return "IV";
        case 5: return "V";
        case 6: return "VI";
        case 7: return "VII";
        case 8: return "VIII";
        case 9: return "IX";
        case 10: return "X";
        default: return "Error";
    }
}

int main() {
    int Number = ReadNumberInRange(1, 10);
    cout << "The Roman Numeral for " << Number << " is: " << GetRomanNumeral(Number) << endl;
    return 0;
}
