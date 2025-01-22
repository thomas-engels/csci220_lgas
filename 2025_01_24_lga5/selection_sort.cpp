#include <iostream>

using namespace std;


void selection_sort(vector<int> &vec) {
    int n = vec.size();
    // outside loop, left = start of list we are sorting
    for (int left = 0; left < n - 1; left++) {
        int minimum_index = left;
        // inside loop, right = min element found so far
        for (int right = left + 1; right < n; right++) {
            if (vec[right] < vec[minimum_index]) {
                minimum_index = right; //
            }
        }
        // swap left and right
        swap(vec[left], vec[minimum_index]);
    }
}


  /*
    pseudocode
    Unsorted vector

    Assume the minimum value is at the left-most index
    Check if the next value is less than the minimum value
        If so, update the minimum value index
    Continue Repeat


    Place the minimum value in the left-most spot
    my_arr and size


    int minimum_index = 0;
    for (int right = 1; right < size - 1; ++right)
        if ( my_arr[right] < my_arr[minimum_index] )
            minimum_index = right;
    swap(my_arr[0], my_arr[minimum_index)

  for (int left = 0; left < size - 1; ++left)
      int minimum_index = left;
      for (int right = left + 1; right < size; ++right)
          if ( my_arr[right] < my_arr[minimum_index] )
              minimum_index = right;
      swap(my_arr[left], my_arr[minimum_index)
   */


void selectionSort(int *my_arr, int size) {
    for (int left = 0; left < size - 1; ++left) {
        int minimum_index = left;

        for (int right = left + 1; right < size; ++right) {
            if (my_arr[right] < my_arr[minimum_index]) {
                minimum_index = right;
            }
        }

        // Swap the found minimum element with the leftmost element
        std::swap(my_arr[left], my_arr[minimum_index]);
    }
}


int main()
{
    std::vector<int> vec = {3, 4, 2, 5};
    selection_sort(vec);
    for (const auto &i : vec) {
      cout << i << " ";
    }
    return 0;
}