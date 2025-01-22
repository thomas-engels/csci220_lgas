#include <iostream>

//using namespace std;
//
//
//void selection_sort(vector<int> &vec) {
//    int n = vec.size();
//    // outside loop, left = start of list we are sorting
//    for (int left = 0; left < n - 1; left++) {
//        int minimum_index = left;
//        // inside loop, right = min element found so far
//        for (int right = left + 1; right < n; right++) {
//            if (vec[right] < vec[minimum_index]) {
//                minimum_index = right; //
//            }
//        }
//        // swap left and right
//        swap(vec[left], vec[minimum_index]);
//    }
//}


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


void selection_sort(std::vector<int>& v)
{
     int n = v.size();
     for (int left = 0; left < n-1; ++left)
     {
       int minimum_index = left;
       for (int right = left + 1; right < n; ++right)
       {
//         std::cout << "Right index: " << right << std::endl;
         if (v[right] < v[minimum_index])
         {
             minimum_index = right;
         }
       }
       std::cout << "V[left] " << v[left] << " and " << "V[minimum_index] " << v[minimum_index] << " will be swapped." << std::endl;
       if (minimum_index != left)
           std::swap(v[left], v[minimum_index]);
     }
}

//void selectionSort(int *my_arr, int size) {
//    for (int left = 0; left < size - 1; ++left) {
//        int minimum_index = left;
//        for (int right = left + 1; right < size; ++right) {
//            if (my_arr[right] < my_arr[minimum_index]) {
//                minimum_index = right;
//            }
//        }
//        // Swap the found minimum element with the leftmost element
//        std::swap(my_arr[left], my_arr[minimum_index]);
//    }
//}



/*
  Assume A[] is an array of unsorted elements.
  for (int left = 0; left < A[].size - 1; ++left)
     Assume the index of the minimum value is the left-most index; aka first index in the array
     int minimum <- 0

     Now we must check all the elements to the right to see if any are less
     for(int right = left + 1; right < A[].size; ++right)
         if (A[minimum] > A[right])
            minimum <- right
         end if
     end for
     Now we must send the lowest value to the last index in the sorted subset
     std::swap(A[left], A[minimum])
  end for
 */







int main()
{
    std::vector<int> vec = {5,4,2};
    selection_sort(vec);
    for (const auto &i : vec) {
      std::cout << i << " ";
    }

    return 0;
}