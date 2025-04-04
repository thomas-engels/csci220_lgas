#include <iostream>

/*



  Choose your pivot
  Define the low index
  Define the high
 */

int quick_partition(int low_index, int high_index, int arr[])
{
	int pivot = arr[low_index];
	int i = low_index;
	int j = high_index;
	while (i < j)
	{
		do
		{
			++i;
		}
		while (arr[i] < pivot); // checking for elements that greater than pivot
		do
		{
			--j;
		}
		while (arr[j] > pivot); // checking for elements that are less than pivot
		if (i < j)
			std::swap(arr[i], arr[j]);
	}
	std::swap(arr[low_index], arr[j]);
	return j;
}

void quick_sort(int low_index, int high_index, int arr[])
{
	if (low_index < high_index)
	{
		const int pivot_index = quick_partition(low_index, high_index, arr);
		quick_sort(low_index, pivot_index, arr);
		quick_sort(pivot_index + 1, high_index, arr);
	}
}




int main()
{
	int my_array[] = {7, 2, 4, 5, 9};
	int size = sizeof(my_array) / sizeof(my_array[0]);
	for (int i = 0; i < size; i++)
		std::cout << my_array[i] << " ";
	quick_sort(0, size, my_array);
	for (int i = 0; i < size; i++)
		std::cout << my_array[i] << " ";
	return 0;
}