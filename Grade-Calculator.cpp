#include <iostream>
using namespace std;

void ReadThreeMarks(double& Mark1, double& Mark2, double& Mark3) {
    cout << "Enter three marks: ";
    cin >> Mark1 >> Mark2 >> Mark3;
}

double CalculateAverage(double m1, double m2, double m3) {
    return (m1 + m2 + m3) / 3.0;
}

char GetGrade(double Average) {
    if (Average >= 90) return 'A';
    else if (Average >= 80) return 'B';
    else if (Average >= 70) return 'C';
    else if (Average >= 60) return 'D';
    else if (Average >= 0) return 'F';
    else return 'X';   
}

void PrintResult(double Average, char Grade) {
    cout << "Average: " << Average << " | Grade: " << Grade << endl;
}

int main() {
    double m1, m2, m3;
    ReadThreeMarks(m1, m2, m3);
    double Average = CalculateAverage(m1, m2, m3);
    PrintResult(Average, GetGrade(Average));
    return 0;
}
