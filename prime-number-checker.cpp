#include <iostream>
#include <limits> 

using namespace std;

int main()
{  
    int inputNumber;
    
    cout << "Please enter the number you want to check for primality: \n\n";
    
    // Input validation loop (filters out values less than or equal to 1)
    while (true) {
        cin >> inputNumber;
        
        if (cin.fail() || inputNumber <= 1) {
            cout << "Invalid input! Please enter an integer greater than 1: \n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
        else {
            break; 
        }
    }
    
    bool isPrime = true;

    // Optimization: Loop runs up to the square root of the number (i * i <= inputNumber)
    for (int i = 2; i * i <= inputNumber; i++) {
        if (inputNumber % i == 0) {
            isPrime = false;
            break; // Standard practice: exit the loop immediately if a divisor is found
        }
    }

    
    if (isPrime) {
        cout << inputNumber << " is a prime number.\n";
    } else {
        cout << inputNumber << " is not a prime number.\n";
    }

    return 0;
}
