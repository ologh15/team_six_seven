#include <iostream>
#include "calculator.cpp"
using namespace std;

int main() {
    Calculator calc;
    double a, b;
    cout << "Введіть перше число: ";
    cin >> a;

    cout << "Введіть друге число: ";
    cin >> b;

    cout << "Додавання: " << calc.add(a, b) << endl;
    cout << "Віднімання: " << calc.subtract(a, b) << endl;
    cout << "Множення: " << calc.multiply(a, b) << endl;
    cout << "Ділення: " << calc.divide(a, b) << endl;

    return 0;
}