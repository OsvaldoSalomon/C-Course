#include <iostream>

using namespace std;

int main() {
    int counter{10};

    cout << "Counter: " << counter << endl;
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    counter++;
    cout << "Counter: " << counter << endl;
    ++counter;
    cout << "Counter: " << counter << endl;
    cout << "================" << endl;

    //Pre Increment
    int counter1{10};
    int result1{0};
    cout << "Counter: " << counter1 << endl;
    result1 = ++counter1;
    cout << "Counter: " << counter1 << endl;
    cout << "Result: " << result1 << endl;
    cout << "================" << endl;

    //Post Increment
    int counter2{10};
    int result2{0};
    cout << "Counter: " << counter2 << endl;
    result2 = counter2++;
    cout << "Counter: " << counter2 << endl;
    cout << "Result: " << result2 << endl;
    cout << "================" << endl;

    int counter3{10};
    int result3{0};
    cout << "Counter: " << counter3 << endl;
    result3 = ++counter3 + 10;
    cout << "Counter: " << counter3 << endl;
    cout << "Result: " << result3 << endl;
    cout << "================" << endl;

    int counter4{10};
    int result4{0};
    cout << "Counter: " << counter4 << endl;
    result4 = counter4++ + 10;
    cout << "Counter: " << counter4 << endl;
    cout << "Result: " << result4 << endl;
    cout << "================" << endl;



}