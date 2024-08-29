#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input number of students

    string names[n];  // Array to store student names

    // Input the student names
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    // Print the initial order
    cout << "Initial order: ";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Selection Sort algorithm
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (names[j] < names[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the names
        string temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;

        // Print the names after each iteration
        cout << "After Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            cout << names[k] << " ";
        }
        cout << endl;
    }

    // Print the sorted order
    cout << "Sorted order: ";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
