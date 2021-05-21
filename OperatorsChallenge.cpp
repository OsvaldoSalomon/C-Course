#include <iostream>

using namespace std;

int main() {
    const int dollarValue{100};
    const int quarterValue{25};
    const int dimeValue{10};
    const int nickelValue{5};

    int changeAmount{};

    cout << "Enter an amount in cents: " << endl;
    cin >> changeAmount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = changeAmount / dollarValue;
    balance = changeAmount - (dollars * dollarValue);

    quarters = balance / quarterValue;
    balance -= quarters * quarterValue;

    dimes = balance / dimeValue;
    balance -= dimes * dimeValue;

    nickels = balance / nickelValue;
    balance -= nickels * nickelValue;

    pennies = balance;

    cout << "You can provide this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    cout << endl;

    cout << "----------------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "----------------------------------" << endl;

    balance = dollars = quarters = dimes = nickels = pennies = 0;

    dollars = changeAmount / dollarValue;
    balance = changeAmount % dollarValue;

    quarters = balance / quarterValue;
    balance %= quarterValue;

    dimes = balance / dimeValue;
    balance %= dimeValue;

    nickels = balance / nickelValue;
    balance %= nickelValue;

    pennies = balance;

    cout << "\nChange using the modulo operator: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}











