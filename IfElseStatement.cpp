#include <iostream>

using namespace std;

int main() {
    int num{};
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << ": " << endl;
    cin >> num;

    if (num >= min) {
        cout << "\n========== If statement 1 ==========" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
}
