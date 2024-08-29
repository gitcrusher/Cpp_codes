#include <iostream>
using namespace std;

// Define the class IntegerManipulator
class IntegerManipulator {
private:
    int number; // Private member to store the number

public:
    // Constructor to set the number
    void setNumber(int n) {
        number = n;
    }

    // Method to count the number of digits using a for loop
    int countDigits() {
        int count = 0;
        for (int temp = number; temp != 0; temp /= 10) { // Use a temporary variable to avoid modifying the original number
            count++;
        }
        return count;
    }

    // Method to find the number of odd digits using a for loop
    int countOddDigits() {
        int count = 0;
        for (int temp = number; temp != 0; temp /= 10) { // Use a temporary variable to avoid modifying the original number
            int digit = temp % 10; // Get the last digit
            if (digit % 2 != 0) { // Check if the digit is odd
                count++;
            }
        }
        return count;
    }
};

int main() {
    IntegerManipulator manipulator; // Create an object of the class
    int n;
    cin >> n; // Input the integer

    manipulator.setNumber(n); // Set the integer

    cout << "Number of digits: " << manipulator.countDigits() << endl;
    cout << "Number of odd digits: " << manipulator.countOddDigits() << endl;

    return 0;
}

