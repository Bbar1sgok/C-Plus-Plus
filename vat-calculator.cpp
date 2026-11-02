#include <iostream>
#include <iomanip>  // Required for fixed and setprecision
#include <limits>   // Required for numeric_limits
#include <cctype>   // Required for tolower()

using namespace std;

int main() {
    float basePrice, taxRate, totalPrice, taxAmount;
    char continueChoice;

    while (true) {
        cout << "VAT & Total Price Calculator\n";
        cout << "----------------------------\n";

        cout << "Please enter the base price of the item: ";
        cin >> basePrice;

        // Input validation for base price
        if (cin.fail() || basePrice <= 0) {
            cout << "\nError: Please enter a valid price greater than zero!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Please enter the VAT tax rate (%): ";
        cin >> taxRate;

        // Input validation for tax rate
        if (cin.fail() || taxRate < 0) {
            cout << "\nError: Please enter a valid non-negative tax rate!\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Calculations
        taxAmount = basePrice * (taxRate / 100.0f);
        totalPrice = basePrice + taxAmount;

        // Format output to 2 decimal places for financial calculations
        cout << fixed << setprecision(2);
        cout << "\n--- CALCULATION RESULT ---\n";
        cout << "VAT Amount : " << taxAmount << "\n";
        cout << "Total Price: " << totalPrice << "\n";
        cout << "--------------------------\n\n";

        cout << "Would you like to calculate another item? (y/n): ";
        cin >> continueChoice;

        if (tolower(continueChoice) == 'n') {
            cout << "\nExiting calculator...\n";
            break;
        }
        cout << "\n-------------------------------------------\n\n";
    }

    return 0;
}
