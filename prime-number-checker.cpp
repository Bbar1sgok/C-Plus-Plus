#include <iostream>
#include <limits> 

using namespace std;

int main()
{  
    int input_number;
    
    cout << "Please enter the number you want to check for primality: \n\n";
    
    // Input validation loop (filters out values less than or equal to 1)
    while (true) {
        cin >> input_number;
        
        if (cin.fail() || input_number <= 1) {
            cout << "Invalid input! Please enter an integer greater than 1: \n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        else {
            break; 
        }
    }
    
    bool isPrime = true;

    // Optimization: Loop runs up to the square root of the number (i * i <= input_number)
    for (int i = 2; i * i <= input_number; i++) {
        if (input_number % i == 0) {
            isPrime = false;
            break; // Standard practice: exit the loop immediately if a divisor is found
        }
    }
    
    if (isPrime) {
        cout << input_number << " is a prime number.\n";
    } else {
        cout << input_number << " is not a prime number.\n";
    }

    return 0;
}
