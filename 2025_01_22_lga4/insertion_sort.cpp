#include <iostream>


using namespace std;


void insertionSort(int arr[], int size)
{
//  INSERTION_SORT(array):
//      n ← length of array
//      for i from 1 to n - 1:            # Start from the second element
//          key ← array[i]                # Element to be inserted
//          j ← i - 1                     # Start comparing with the previous element
//
//          while j ≥ 0 AND array[j] > key: # Shift elements of the sorted part
//              array[j + 1] ← array[j]     # Move the element one position to the right
//              j ← j - 1
//
//          array[j + 1] ← key
  for (int i = 1; i < size; ++i)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }

}


int main() {
  int arr[] = {7,4,3};
  insertionSort(arr, 3);
  for (int i = 0; i < 3; i++)
    std::cout << arr[i] << " ";
}