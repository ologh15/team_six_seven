#include <iostream> 
#include "calculator.cpp"

int main() {
    Calculator calc;
    double a, b;

    cout << "First num: ";
    cin >> a;

    cout << "Second num: ";
    cin >> b;

    cout << "Addition: " <<endl;
    cout << "Subtraction: " << calc.subtract(a, b) << endl;
    cout << "Multiplication: " << calc.divide(a, b) << endl;
    cout << "Division: " << calc.subtract(a, b) << endl;

    return 0;
}