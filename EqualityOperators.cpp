#include <iostream>

using namespace std;

int main() {
    bool equalResult{false};
    bool notEqualResult{false};

    int num1{}, num2{};

    cout << boolalpha;  // will display true/false instead of 0/1

//    cout  << "Enter 2 integers separated by a space: ";
//    cin >> num1 >> num2;
//    equalResult = (num1 == num2);
//    notEqualResult = (num1 != num2);
//    cout << "\nComparison result (equals): " << equalResult << endl;
//    cout << "Comparison result (not equals): " << notEqualResult << endl;

//    char double1{}, double2{};
//    cout << "Enter 2 characters separated by a space: ";
//    cin >> double1 >> double2;
//    equalResult = (double1 == double2);
//    notEqualResult = (double1 != double2);
//    cout << "\nComparison result (equals): " << equalResult << endl;
//    cout << "Comparison result (not equals): " << notEqualResult << endl;

    double double1{}, double2{};
//    cout << "Enter 2 doubles separated by a space: ";
//    cin >> double1 >> double2;
//    equalResult = (double1 == double2);
//    notEqualResult = (double1 != double2);
//    cout << "\nComparison result (equals): " << equalResult << endl;
//    cout << "Comparison result (not equals): " << notEqualResult << endl;

    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;
    equalResult = (num1 == double1);
    notEqualResult = (num1 != double1);
    cout << "\nComparison result (equals): " << equalResult << endl;
    cout << "Comparison result (not equals): " << notEqualResult << endl;

    cout << endl;

    return 0;
}