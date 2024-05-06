#include "array.h"

// Constructor
ArrayOperations::ArrayOperations() {
    size = 0;
}

// Function to read data from file into array
void ArrayOperations::readFromFile(string filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Unable to open file." << endl;
        exit(1);
    }

    int num;
    while (inFile >> num && size < MAX_SIZE) {
        arr[size++] = num;
    }

    inFile.close();
}

// Function to check if a number exists in the array
int ArrayOperations::find(int num) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num)
            return i;
    }
    return -1; // Number not found
}

// Function to modify the value of an integer at a given index
pair<int, int> ArrayOperations::modify(int index, int newValue) {
    if (index < 0 || index >= size) {
        cerr << "Error: Index out of bounds." << endl;
        exit(1);
    }
    int oldValue = arr[index];
    arr[index] = newValue;
    return make_pair(oldValue, newValue);
}

// Function to add a new integer to the end of the array
void ArrayOperations::add(int num) {
    cout << "Array contents: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

// Function to replace value at given index with 0 or remove it
void ArrayOperations::replaceOrRemove(int index, bool remove) {
    if (index < 0 || index >= size) {
        cerr << "Error: Index out of bounds." << endl;
        exit(1);
    }
    if (remove) {
        for (int i = index; i < size - 1; ++i)
            arr[i] = arr[i + 1];
        size--;
    } else {
        arr[index] = 0;
    }
}

// Function to print the contents of the array
void ArrayOperations::printArray() {
    cout << "Array contents: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
