#include <iostream>
using namespace std;

int main() {
    // Character type
    char middleInitial{'J'};
    cout << "My middle initial is " << middleInitial << endl;

    // Integer types
    unsigned short int examScore{95}; // Same as unsigned short examScore{95}
    cout << "My exam score was " << examScore << endl;

    int countriesRepresented{65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;

//    long peopleInFlorida{20610000};
//    cout << "There are about " << peopleInFlorida << " people in Florida" << endl;

//    long long peopleOnEarth{7600000000};
//    cout << "There are about " << peopleOnEarth << " people on Earth" << endl;

    // Floating types
    float car_payment{401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi{3.14159};
    cout << "PI is " << pi << endl;

    long double large_amount{2.7e120};
    cout << large_amount << " is a very large number" << endl;

    // Boolean type
    bool gameOver{false};
    cout << "The value of gameOver is " << gameOver << endl;

}