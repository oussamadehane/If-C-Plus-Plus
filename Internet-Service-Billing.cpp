#include <iostream>
using namespace std;

// دالة لحساب الفاتورة النهائية
double CalculateBill(char package, int hours) {
    double totalFees = 0.0;

    // تحويل الحرف الصغير إلى كبير باش نتهناو من مشاكل الإدخال
    package = toupper(package); 

    if (package == 'A') {
        totalFees = 9.95;
        if (hours > 10) {
            totalFees += (hours - 10) * 2.00;
        }
    } 
    else if (package == 'B') {
        totalFees = 13.95;
        if (hours > 20) {
            totalFees += (hours - 20) * 1.00;
        }
    } 
    else if (package == 'C') {
        totalFees = 19.95;
    } 
    else {
        cout << "Invalid Package Letter!" << endl;
        return 0; // في حال أدخل حرف خاطئ
    }

    return totalFees;
}

int main() {
    char package;
    int hours;

    // قراءة البيانات من المستخدم
    cout << "Enter the letter of the package (A, B, or C): ";
    cin >> package;
    
    cout << "Enter the number of hours used: ";
    cin >> hours;

    // حساب النتيجة وطباعتها
    double finalBill = CalculateBill(package, hours);
    
    if (finalBill > 0) {
        cout << "The total monthly charges are: $" << finalBill << endl;
    }

    return 0;
}
