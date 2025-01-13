#include <iostream>

struct foo
{
 int age = 21;
};

template <typename T>
void print_five(T t)
{
  for (int i = 0; i < 5; i++)
  {
    std::cout << t << " " << std::endl;
  }
}

int main()
{
  foo foo1;
  print_five(5);
  print_five("Hello");
  print_five("World");

  // compile error because no expected print behavior for foo
  //print_five(foo1);

  return 0;
}
