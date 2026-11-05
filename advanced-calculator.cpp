#include <iostream>
#include <cmath>    // Required for pow, sqrt, abs
#include <limits>   // Required for numeric_limits
#include <cctype>   // Required for tolower

using namespace std;

int main()
{
    while (true)
    {
        double num1, num2;
        char operation, exitChoice;

        cout << "****** Advanced Calculator Tool ******\n\n";

        cout << "Please enter the first number: ";
        cin >> num1;

        if (cin.fail()) {
            cout << "\nError: Invalid input! Please enter a valid number.\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "Please enter the second number: ";
        cin >> num2;

        if (cin.fail()) {
            cout << "\nError: Invalid input! Please enter a valid number.\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "\nPlease select an operation:\n";
        cout << " 1-> Addition\n 2-> Subtraction\n 3-> Division\n 4-> Multiplication\n 5-> Exponentiation (num1^num2)\n 6-> Sum of Square Roots\n 7-> Sum of Absolute Values\n\nChoice: ";
        cin >> operation;

        cout << "\n--- RESULT ---\n";
        switch (operation)
        {
            case '1':
                cout << "Sum: " << num1 + num2 << "\n";
                break;

            case '2':
                cout << "Difference: " << num1 - num2 << "\n";
                break;

            case '3':
                if (num1 == 0 && num2 == 0)
                    cout << "Error: 0 / 0 is indeterminate.\n";
                else if (num2 == 0)
                    cout << "Error: Division by zero is undefined.\n";
                else
                    cout << "Quotient: " << num1 / num2 << "\n";
                break;

            case '4':
                cout << "Product: " << num1 * num2 << "\n";
                break;

            case '5':
                cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
                break;

            case '6':
                if (num1 < 0 || num2 < 0)
                    cout << "Error: Cannot calculate the square root of a negative number!\n";
                else
                    cout << "Sum of square roots: " << sqrt(num1) + sqrt(num2) << "\n";
                break;

            case '7':
                cout << "Sum of absolute values: " << abs(num1) + abs(num2) << "\n";
                break;

            default:
                cout << "Error: Invalid operation choice!\n";
        }
        cout << "--------------\n\n";

        cout << "Would you like to perform another calculation? (y/n): ";
        cin >> exitChoice;

        if (tolower(exitChoice) == 'n') {
            cout << "\nExiting calculator...\n";
            break;
        }
        cout << "\n=========================================\n\n";
    }

    return 0;
}
