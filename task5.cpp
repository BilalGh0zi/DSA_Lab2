#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr, const int size);


void testSortedArray() {
    int arr[] = {1, 2, 3, 4, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 2: Unsorted array
void testUnsortedArray() {
    int arr[] = {1, 4, 3, 5, 6};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

// Test 3: Duplicate values
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 5};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 4: Single element
void testSingleElement() {
    int arr[] = {7};

    bool result = isSorted(arr, 1);

    assert(result == true);
}

// Test 5: Descending array
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};

    bool result = isSorted(arr, 5);

    assert(result == false);
}

// Test 6: Negative values
void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};

    bool result = isSorted(arr, 5);

    assert(result == true);
}

// Test 7: All elements equal
void testAllEqual() {
    int arr[] = {4, 4, 4, 4};

    bool result = isSorted(arr, 4);

    assert(result == true);
}

// Test 8: Unsorted negative values
void testUnsortedNegativeValues() {
    int arr[] = {-5, -2, -4, 0};

    bool result = isSorted(arr, 4);

    assert(result == false);
}

int main() {

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testUnsortedNegativeValues();

    cout << "All tests passed!" << endl;

    return 0;
}