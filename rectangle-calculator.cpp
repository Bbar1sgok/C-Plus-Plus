#include <iostream>
#include <iomanip>  // Required for setprecision and fixed
#include <limits>   // Required for numeric_limits
#include <cctype>   // Required for tolower()

using namespace std;

int main() {
    float length, width, area, perimeter;
    char exitChoice;

    while (true) {
        cout << "Rectangle Area and Perimeter Calculator\n";
        cout << "---------------------------------------\n";

        cout << "Please enter the length (longer side): ";
        cin >> length;

        // Input validation for length
        if (cin.fail() || length <= 0) {
            cout << "\nError: Please enter a valid number greater than zero!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Please enter the width (shorter side): ";
        cin >> width;

        // Input validation for width
        if (cin.fail() || width <= 0) {
            cout << "\nError: Please enter a valid number greater than zero!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Validate relative side lengths
        if (width > length) {
            cout << "\nError: Width cannot be greater than length!\n\n";
            continue;
        }

        // Calculations
        area = length * width;
        perimeter = 2 * (length + width);

        // Format output to 2 decimal places
        cout << fixed << setprecision(2);
        cout << "\n--- CALCULATION RESULT ---\n";
        cout << "Area     : " << area << "\n";
        cout << "Perimeter: " << perimeter << "\n";
        cout << "--------------------------\n\n";

        cout << "Do you want to exit the application? (y/n): ";
        cin >> exitChoice;

        if (tolower(exitChoice) == 'y') {
            cout << "\nExiting application...\n";
            break;
        }
        cout << "\n---------------------------------------\n\n";
    }

    return 0;
}
