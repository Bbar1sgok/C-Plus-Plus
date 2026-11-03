#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {
    int inputNumber;

    cout << "Please enter a positive integer to check for perfection: \n";

    // Input validation loop (handles non-numeric inputs and values <= 0)
    while (true) {
        cin >> inputNumber;

        if (cin.fail() || inputNumber <= 0) {
            cout << "Error: Invalid input! Please enter a positive integer greater than 0: \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    int sumOfDivisors = 0;

    // Calculate sum of proper divisors
    for (int i = 1; i < inputNumber; i++) {
        if (inputNumber % i == 0) {
            sumOfDivisors += i;
        }
    }

    // Output result
    if (sumOfDivisors == inputNumber) {
        cout << inputNumber << " is a perfect number.\n";
    } else {
        cout << inputNumber << " is not a perfect number.\n";
    }

    return 0;
}
