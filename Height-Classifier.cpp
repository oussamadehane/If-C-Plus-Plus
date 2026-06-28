#include <iostream>
#include <string>
using namespace std;

double ReadHeight() {
    double Height = 0.0;
    cout << "Enter your height in CM: ";
    cin >> Height;
    return Height;
}

string GetHeightCategory(double Height) {
    if (Height > 0 && Height < 150)
        return "Dwarf";
    else if (Height >= 150 && Height < 165)
        return "Short";
    else if (Height >= 165 && Height < 195)
        return "Tall";
    else
        return "Abnormal";
}

void PrintCategory(double Height) {
    cout << "Height: " << Height << " CM | Category: " << GetHeightCategory(Height) << endl;
}

int main() {
    PrintCategory(ReadHeight());
    return 0;
}
