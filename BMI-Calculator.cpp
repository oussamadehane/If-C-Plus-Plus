#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadWeight_Height(double& Weight, double& Height) {
    cout << "Enter your Weight (lbs): "; cin >> Weight;
    cout << "Enter your Height (inches): "; cin >> Height;
}

double CalculateBMI(double Weight, double Height) {
    return (Weight * 703) / pow(Height, 2);
}

string GetBMIResult(double BMI) {
    if (BMI < 18.5)
        return "Underweight";
    else if (BMI >= 18.5 && BMI <= 25)
        return "Optimal Weight";
    else
        return "Overweight";
}

void PrintResult(double BMI) {
    cout << "Your BMI is: " << BMI << endl;
    cout << "Category: " << GetBMIResult(BMI) << endl;
}

int main() {
    double Weight, Height;
    ReadWeight_Height(Weight, Height);
    double BMI = CalculateBMI(Weight, Height);
    PrintResult(BMI);
    return 0;
}
