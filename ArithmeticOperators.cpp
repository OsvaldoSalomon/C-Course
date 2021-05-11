#include <iostream>

using namespace std;

int main() {
    int num1{200};
    int num2{100};
    int result{0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num2 % num1;
    cout << num2 << " % " << num1 << " = " << result << endl;

    cout << "======================" << endl;

    const double usdPerEur{1.19};
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros{0.0};
    double dollars{0.0};

    cin >> euros;

    dollars = euros * usdPerEur;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;

    return 0;
}












