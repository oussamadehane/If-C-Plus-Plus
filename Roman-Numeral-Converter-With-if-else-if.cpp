#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
    int Number = 0;
    cout << "Enter a number (1-10): ";
    cin >> Number;
    return Number;
}

string GetRomanNumeral(int Number) {
    if (Number == 1) return "I";
    else if (Number == 2) return "II";
    else if (Number == 3) return "III";
    else if (Number == 4) return "IV";
    else if (Number == 5) return "V";
    else if (Number == 6) return "VI";
    else if (Number == 7) return "VII";
    else if (Number == 8) return "VIII";
    else if (Number == 9) return "IX";
    else if (Number == 10) return "X";
    else return "Error"; // في حال كان الرقم خارج النطاق
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
