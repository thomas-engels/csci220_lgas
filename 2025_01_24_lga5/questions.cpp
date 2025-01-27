#include<iostream>
using namespace std;

void times_table(unsigned int n) { // O(1)
    for (unsigned int i = 0; i <= n; i++) { // O(n)
        for (unsigned int j = 0; j <= n; j++) { // O(n)
            cout << i * j << " "; // O(1)
        }
        cout << endl;
    }
}

// outer loop runs n times, inner loop runs n times for each n. Therefore n^2



void print_powers(int n) { // O(1)
    int val = 1; // O(1)
    int p = 0; // O(1)
    for (int i = 0; i < 5; i++) { // O(5)
        for (int j = 0; j < 5; j++) { //(5)
            cout << n << "^" << p << " = " << val << "\t";
            val = val * n;
            p++;
        }
        cout << endl;
    }
}
// O(25)
// O(1)


void aesop(unsigned int n) {
    unsigned tortoise = 0;
    unsigned hare = 0;
    int loop_counter = 0;
    while (tortoise < n && hare < n) { // 2n -> O(n)
        std::cout << loop_counter << "\t";
        if (tortoise > hare) { // O(1
            hare += (n - tortoise) / 2; // (n - 1 / 2)
        }
        tortoise++;
        loop_counter++;
    }
    if (tortoise > hare) cout << "Tortoise wins!";
    else if (hare > tortoise) cout << "Hare wins!";
    else cout << "It's a tie!";
}


#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    int inner_loop_counter = 0;
    int outer_loop_counter = 0;
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // Current element to be inserted
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than `key`
        // one position ahead of their current position
        inner_loop_counter = outer_loop_counter;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
            inner_loop_counter++;
        }
        arr[j + 1] = key; // Place `key` in its correct position
        outer_loop_counter++;
    }
    std::cout << outer_loop_counter << endl;
}

void printArray(const std::vector<int>& arr)
{
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};

    std::cout << "Original array: ";
    printArray(arr);

    insertionSort(arr);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
//
//
//
//// O(n)
//
//
//int main() {
//  int distance = 100;
//  aesop(distance);
//  return 0;
//}

// Best Case: O(1) when n <= 0
// Worst Case: