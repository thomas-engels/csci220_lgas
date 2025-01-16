#include <iostream>
using namespace std;

void sequence(unsigned int n) {
    cout << n;
    while (n != 1) {
        if (n % 2 == 0) n = n / 2;
        else n = 3 * n + 1;
        cout << ' ' << n;
    }
    cout << endl;
}

//-------------Question 1-------------//
// Sudo Code
/*
Sequence is a function that expects the absolute value of any integer named n.
Display n to the function user.
While n does not equal 1,
    If n is even, then n <- n * .5.
    Else n is odd, then n <- 3 * n + 1.
    End If.
    Display a space to the user.
    Display n to the user.
    Continue in the while loop.
n must equal 1.
End While loop.
Display an endline character to the user.
Function is terminated.
 */


//-------------Question 2-------------//
// written on PDF

//-------------Question 3-------------//


double hw_mean(int * my_arr, int size) {
    int mean = 0;
    int count = 0;
    for (int i = 0; i < size; i++) {
        int sum = (mean * count) + my_arr[i]; // this doesn't make sense
        count += 1; // count should be incremented at the end of the for loop
        mean = sum / count;
    }
    return mean;
}

double mean(const int *my_arr, const int size) {
    if (size >= 1) {
        int mean = my_arr[0];
        int count = 1;
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum = sum + my_arr[i];
            mean = sum / count;
            count++;
            std::cout << "Mean: " << mean << " ";
            std::cout << "Count: " << count << " ";
            std::cout << "Sum: " << sum << std::endl;
        }
        return mean;
    }
    std::cout << "No mean! Empty array!" << std::endl;
    return 0.0;
}


int main()
{
  int size = 3;
  double my_mean = 0;
  int arr[] {5,10,15};
  my_mean = mean(arr, size);
    cout << "Tommy's mean: " << my_mean << endl;
    my_mean = hw_mean(arr, size);
    cout << "HW mean: " << my_mean << endl;
  return 0;
}