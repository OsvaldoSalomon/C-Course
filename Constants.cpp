#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Oli's Carpet Cleaning Service" << endl;

    int numberOfSmallRooms{0};
    cout << "\nHow many small rooms would you like cleaned? " << endl;
    cin >> numberOfSmallRooms;

    int numberOfLargeRooms{0};
    cout << "How many large rooms would you like cleaned? " << endl;
    cin >> numberOfLargeRooms;

    const double pricePerSmallRoom{25.0};
    const double pricePerLargeRoom{35.0};
    const double salesTax{0.06};
    const int estimateExpiry{30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Cost: $" << (pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms) << endl;
    cout << "Tax: $" << ((pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms)) * salesTax
         << endl;
    cout << "====================================" << endl;
    cout << "Total estimate: $"
         << (pricePerSmallRoom * numberOfSmallRooms) + (pricePerLargeRoom * numberOfLargeRooms) +
            (pricePerLargeRoom * numberOfLargeRooms * salesTax) + (pricePerSmallRoom * numberOfSmallRooms * salesTax)
         << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

    cout << endl;

    return 0;
}