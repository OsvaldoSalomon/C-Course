#include <iostream>

using namespace std;

int main() {
    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//
//    bool withinBounds{false};
//    withinBounds = (num > lower && num < upper);
//    cout << num << " is between " << lower << " and " << upper << " : " << withinBounds << endl;

    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

}