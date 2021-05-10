#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    cout << vowels.at(0) << endl;
    cout << vowels[4] << endl;

    //vector<int> testScores(3);  3 elements, all initialized to zero
    //vector<int> testScores(3,);  3 elements, all initialized to 100
    vector<int> testScores{100,98,89};

    cout << "\nTest scores using array syntax:" << endl;
    cout << testScores[0] << endl;
    cout << testScores[1] << endl;
    cout << testScores[2] << endl;

    cout << "\nTest scores using vector syntax:" << endl;
    cout << testScores.at(0) << endl;
    cout << testScores.at(1) << endl;
    cout << testScores.at(2) << endl;
    cout << "There are " << testScores.size() << " scores in the vector" << endl;

//    cout << "\nEnter 3 test scores: " << endl;
//    cin >> testScores.at(0);
//    cin >> testScores.at(1);
//    cin >> testScores.at(2);
//
//    cout << "\nUpdated test scores: " << endl;
//    cout << testScores.at(0) << endl;
//    cout << testScores.at(1) << endl;
//    cout << testScores.at(2) << endl;
//
//    cout << "Enter a test score to the vector: " << endl;
//    int scoreToAdd{0};
//    cin >> scoreToAdd;
//    testScores.push_back(scoreToAdd);
//
//    cout << "Enter one more test score to the vector: " << endl;
//    cin >> scoreToAdd;
//    testScores.push_back(scoreToAdd);
//
//    cout << "\nTest scores are now: " << endl;
//    cout << testScores.at(0) << endl;
//    cout << testScores.at(1) << endl;
//    cout << testScores.at(2) << endl;
//    cout << testScores.at(3) << endl;
//    cout << testScores.at(4) << endl;
//    cout << "There are " << testScores.size() << " scores in the vector" << endl;

    cout << "==============================" << endl;
    cout << "Example of a 2D vector" << endl;

    vector<vector<int>> movieRatings{
            {1,2,3,4},
            {1,2,4,4},
            {1,3,4,5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax:" << endl;
    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;



}







