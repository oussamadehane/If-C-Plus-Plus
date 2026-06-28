#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "Enter a number between 1 and 10: ";
    cin >> Number;
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

void PrintResult(int Number) {
    string Roman = GetRomanNumeral(Number);
    if (Roman == "Error")
        cout << "Error: The number is outside the range (1-10)." << endl;
    else
        cout << "The Roman Numeral for " << Number << " is: " << Roman << endl;
}

int main() {
    PrintResult(ReadNumber());
    return 0;
}
