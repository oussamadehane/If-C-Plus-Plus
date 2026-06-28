#include <iostream>
using namespace std;

int ReadQuantity() {
    int Quantity;
    cout << "Enter number of packages: ";
    cin >> Quantity;
    return Quantity;
}

double ReadPrice() {
    double Price;
    cout << "Enter price per package: ";
    cin >> Price;
    return Price;
}

double CalculateDiscountedTotal(int Quantity, double Price) {
    double Total = Quantity * Price;
    double DiscountRate = 0.0;

    if (Quantity >= 100) DiscountRate = 0.50;
    else if (Quantity >= 50) DiscountRate = 0.40;
    else if (Quantity >= 20) DiscountRate = 0.30;
    else if (Quantity >= 10) DiscountRate = 0.20;

    return Total - (Total * DiscountRate);
}

void PrintPay(double FinalPrice) {
    cout << "Total amount to pay: $" << FinalPrice << endl;
}

int main() {
    int Qty = ReadQuantity();
    double Price = ReadPrice();
    PrintPay(CalculateDiscountedTotal(Qty, Price));
    return 0;
}
