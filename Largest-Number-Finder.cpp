#include <iostream>
using namespace std;

void ReadThreeNumbers(double& N1, double& N2, double& N3) {
    cout << "Enter N1, N2, and N3: ";
    cin >> N1 >> N2 >> N3;
}

double FindTheLargestNumber(double N1, double N2, double N3) {
    if (N1 > N2 && N1 > N3)
        return N1;
    else if (N2 > N1 && N2 > N3)
        return N2;
    else
        return N3;
}

void PrintResult(double Largest) {
    cout << "The Largest Number is: " << Largest << endl;
}

int main() {
    double N1, N2, N3;
    ReadThreeNumbers(N1, N2, N3);
    double LargestNumber = FindTheLargestNumber(N1, N2, N3);
    PrintResult(LargestNumber);
    return 0;
}
