#include <iostream>
#include "array.h"

using namespace std;

int main() {
    ArrayOperations arrOps;
    arrOps.readFromFile("A1input.txt");

    // Print initial array contents
    cout << "Printing original array... " << endl << endl;
    arrOps.printArray();
    cout << endl;

    // Example usage of functions with exception handling
    try {
        // Modify function with exception handling
        pair<int, int> modification = arrOps.modify(3, 99);
        cout << "Value at index 3 modified from " << modification.first << " to " << modification.second << endl << endl;

        // Add function with exception handling
        cout << endl;
        arrOps.add(101);
        cout << "Number 101 added to the array." << endl << endl;
        arrOps.printArray();
        cout << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    // Other function calls without exception handling
    int index = arrOps.find(5);
    if (index != -1)
        cout << "Number 5 found at index: " << index << endl << endl;
    else
        cout << "Number 5 not found in the array." << endl << endl;

    arrOps.replaceOrRemove(7); // Replace value at index 7 with 0
    cout << "Value at index 7 replaced with 0." << endl << endl;
    arrOps.printArray();
    cout << endl;

    arrOps.replaceOrRemove(10, true); // Remove value at index 10
    cout << "Value at index 10 removed from the array." << endl << endl;
    arrOps.printArray();

    return 0;
}
