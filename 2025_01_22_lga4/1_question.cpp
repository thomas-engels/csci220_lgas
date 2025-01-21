/*
(Basic) Write a C++ function that, given a stack of integers, swaps the top two elements in the stack;
if the stack contains fewer than two elements, the function should do nothing.
 */

#include <iostream>
#include <stack>

using namespace std;

void swap_top_elements(stack<int> &s)
{
  if (s.size() > 2)
  {
    int current_top = s.top();
    s.pop();
    int future_top = s.top();
    s.pop();
    s.push(current_top);
    s.push(future_top);
  }
}

int main()
{
  int nums[] = {1,2,3,4,5,6,7,8,9,10};
  stack<int> s = stack<int>();
  for (int i = 0; i < 10; i++)
    s.push(nums[i]);
  swap_top_elements(s);
  for (int i = 0; i < 10; i++)
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}