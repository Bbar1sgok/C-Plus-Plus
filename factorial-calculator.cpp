#include <iostream>
#include <limits> // Required for numeric_limits

using namespace std;

int main() {
    int inputNumber;

    // Input validation loop (handles non-numeric inputs and negative numbers)
    while (true) {
        cout << "Please enter a non-negative integer (0 or greater): ";
        cin >> inputNumber;

        if (cin.fail() || inputNumber < 0) {
            cout << "Error: Invalid input! Please enter a non-negative integer.\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Using unsigned long long to prevent early memory overflow
    unsigned long long factorial = 1;

    // If input is 0, the loop won't run, leaving factorial as 1 (0! = 1)
    for (int i = 1; i <= inputNumber; ++i) {
        factorial *= i;
    }

    cout << inputNumber << "! = " << factorial << "\n";

    return 0;
}
