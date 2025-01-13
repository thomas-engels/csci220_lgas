#include <iostream>

template <typename T>
class holds5
{
  private:
    T storage_array[5];
  public:
    holds5(T a, T b, T c, T d, T e)
    {
      storage_array[0] = a;
      storage_array[1] = b;
      storage_array[2] = c;
      storage_array[3] = d;
      storage_array[4] = e;
    }
    T get_item(int index)
    {
      return storage_array[index];
    }

    //big 3
    foo<T>& operator=(foo<T>& rhs)
    {
    }
};

void holds5_test()
{
  holds5<std::string> holder("zero", "one", "two", "apple", "four");
  std::cout << holder.get_item(3); // returns "apple"
}

int main()
{
  holds5_test();
  return 0;
}
