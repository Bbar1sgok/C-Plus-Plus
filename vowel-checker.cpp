#include <iostream>
#include <cctype>   // Required for isalpha() and tolower()
#include <limits>   // Required for numeric_limits

using namespace std;

int main() {
    char userInput;

    while (true) {
        cout << "Please enter a letter: ";
        cin >> userInput;

        // 1. Input validation: Check if the character is a valid letter
        if (!isalpha(userInput)) {
            cout << "Error: Invalid input! Please enter an alphabetic character (A-Z).\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // 2. Vowel vs. Consonant check using fall-through switch cases
        switch (tolower(userInput)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "'" << userInput << "' is a vowel.\n";
                break;
            default:
                cout << "'" << userInput << "' is a consonant.\n";
        }

        // 3. Exit condition check
        cout << "\nPress 'q' to quit, or 'w' to continue: ";
        cin >> userInput;

        if (tolower(userInput) == 'q') {
            cout << "Exiting program...\n";
            break;
        }
        cout << "\n-----------------------------------\n\n";
    }

    return 0;
}
