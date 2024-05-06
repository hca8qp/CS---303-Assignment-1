#ifndef ARRAYOPERATIONS_H
#define ARRAYOPERATIONS_H

#include <iostream>
#include <fstream>
#include <utility>

using namespace std;

// Define maximum size for the array
const int MAX_SIZE = 100;

class ArrayOperations {
private:
    int arr[MAX_SIZE];
    int size;

public:
    // Constructor
    ArrayOperations();

    // Function to read data from file into array
    void readFromFile(string filename);

    // Function to check if a number exists in the array
    int find(int num);

    // Function to modify the value of an integer at a given index
    pair<int, int> modify(int index, int newValue);

    // Function to add a new integer to the end of the array
    void add(int num);

    // Function to replace value at given index with 0 or remove it
    void replaceOrRemove(int index, bool remove = false);

    // Function to print the contents of the array
    void printArray();
};

#endif
