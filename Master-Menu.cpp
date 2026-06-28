#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
using namespace std;

// --- جميع الدوال المساعدة للمشاريع (تم تجميعها هنا) ---

// Leap Year
void RunLeapYear() {
    int year; cout << "Enter year: "; cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) cout << "Leap Year.\n";
    else cout << "Not a Leap Year.\n";
}

// Voting Checker
void RunVoting() {
    int age; cout << "Enter age: "; cin >> age;
    if (age >= 18) cout << "Eligible to vote.\n";
    else cout << "Not eligible.\n";
}

// Roman Converter
void RunRomanConverter() {
    int n; cout << "Enter (1-10): "; cin >> n;
    string roman[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    if (n >= 1 && n <= 10) cout << "Roman: " << roman[n-1] << endl;
    else cout << "Error!\n";
}

// Magic Day
void RunMagicDay() {
    int m, d, y; cout << "Enter M, D, Y: "; cin >> m >> d >> y;
    if (m * d == y) cout << "Magic Day!\n";
    else cout << "Not a Magic Day.\n";
}

// BMI Calculator
void RunBMI() {
    double w, h; cout << "Enter Weight (lbs) & Height (inches): "; cin >> w >> h;
    double bmi = (w * 703) / pow(h, 2);
    cout << "BMI: " << bmi << (bmi < 18.5 ? " (Underweight)" : (bmi <= 25 ? " (Optimal)" : " (Overweight)")) << endl;
}

// Grade Calculator
void RunGradeCalculator() {
    double m1, m2, m3; cout << "Enter 3 marks: "; cin >> m1 >> m2 >> m3;
    double avg = (m1 + m2 + m3) / 3.0;
    char g = (avg >= 90) ? 'A' : (avg >= 80 ? 'B' : (avg >= 70 ? 'C' : (avg >= 60 ? 'D' : 'F')));
    cout << "Average: " << avg << " Grade: " << g << endl;
}

// Bulk Discount
void RunBulkDiscount() {
    int q; double p; cout << "Enter Qty & Price: "; cin >> q >> p;
    double rate = (q >= 100) ? 0.5 : (q >= 50 ? 0.4 : (q >= 20 ? 0.3 : (q >= 10 ? 0.2 : 0.0)));
    cout << "Total: $" << (q * p) * (1 - rate) << endl;
}

// Internet Billing
void RunInternetBilling() {
    char p; int h; cout << "Enter Package (A,B,C) & Hours: "; cin >> p >> h;
    double fee = (toupper(p) == 'A') ? 9.95 + (h > 10 ? (h - 10) * 2 : 0) : 
                 (toupper(p) == 'B') ? 13.95 + (h > 20 ? (h - 20) * 1 : 0) : 19.95;
    cout << "Total: $" << fee << endl;
}

// --- القائمة الرئيسية ---
int main() {
    int choice;
    do {
        cout << "\n=== MASTER TOOLKIT ===\n1.Leap Year 2.Voting 3.Roman 4.Magic Day 5.BMI 6.Grade 7.Discount 8.Internet 9.Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: RunLeapYear(); break; case 2: RunVoting(); break;
            case 3: RunRomanConverter(); break; case 4: RunMagicDay(); break;
            case 5: RunBMI(); break; case 6: RunGradeCalculator(); break;
            case 7: RunBulkDiscount(); break; case 8: RunInternetBilling(); break;
            case 9: cout << "Bye!\n"; break;
            default: cout << "Invalid!\n";
        }
    } while (choice != 9);
    return 0;
}
