#include<iostream>


class Stack
{
    int stack_array[4];
    int * top_ptr;
    int size;
    public:
      Stack()
      {
        top_ptr=stack_array;
        size=0;
      }
};

int main()
{
  Stack my_stack;

  std::string my_arr[5];
  std::cout << my_arr[4] << std::endl;
  return 0;
}