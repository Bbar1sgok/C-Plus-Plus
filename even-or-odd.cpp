#include <iostream>
#include <limits>

using namespace std;

int main()
{
    while (true)
    {
        int inputNumber;
        char userChoice;

        cout << "Even or Odd Number Checker\n\n";
        cout << "Please enter an integer to check: ";

        cin >> inputNumber;

        // Input validation
        if (cin.fail()) {
            cout << "\nError: Please enter a valid integer!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Modulo check: Handles both positive and negative numbers correctly
        if (inputNumber % 2 == 0)
        {
            cout << inputNumber << " is an EVEN number.\n\n";
        }
        else
        {
            cout << inputNumber << " is an ODD number.\n\n";
        }

        cout << "Do you want to check another number? (y/n): ";
        cin >> userChoice;
        cout << "\n";

        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userChoice == 'n' || userChoice == 'N') {
            cout << "Exiting program...\n";
            break;
        }
    }

    return 0;
}
