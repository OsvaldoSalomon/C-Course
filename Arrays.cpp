#include <iostream>

using namespace std;

int main() {
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;

    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7;

    cout << "\nThe first high temperature (modified) is: " << hi_temps[0] << endl;

    int testScores[]{100, 90, 80, 70, 60};
    cout << "\nFirst score at index 0: " << testScores[0] << endl;
    cout << "\nSecond score at index 1: " << testScores[1] << endl;
    cout << "\nThird score at index 2: " << testScores[2] << endl;
    cout << "\nFourth score at index 3: " << testScores[3] << endl;
    cout << "\nFifth score at index 4: " << testScores[4] << endl;

    cout << "\nEnter 5 scores: ";
    cin >> testScores[0];
    cin >> testScores[1];
    cin >> testScores[2];
    cin >> testScores[3];
    cin >> testScores[4];

    cout << "\nThe updated array is:" << endl;
    cout << "\nFirst score at index 0: " << testScores[0] << endl;
    cout << "\nSecond score at index 1: " << testScores[1] << endl;
    cout << "\nThird score at index 2: " << testScores[2] << endl;
    cout << "\nFourth score at index 3: " << testScores[3] << endl;
    cout << "\nFifth score at index 4: " << testScores[4] << endl;

}