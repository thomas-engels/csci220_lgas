//4. (Intermediate) A palindrome is a string that reads the same forward and backward, such as “kayak”,
//“civic”, or “racecar”. Describe one way you can use a stack and a queue together to determine if a
//given string is a palindrome.


#include <stdio.h>
#include <iostream>
#include <stack>
#include <queue>


int main()
{
  std::string my_string {"racecar"};
  // size / 2
  // only using stack ->
  /*
    If size % 2 == 0
        Push half the string into a stack.
    Else
        Push half the string into a stack.
        Make a copy of the next element.
        Push that character onto the stack.
    While One Stack is not empty
        Pop off the head element from each stack, compare.
        If any are not equal, break the while loop and you don't have a palindrome.
   */
  /*
  Load the string into a queue.
  Dequeue each element into a new string.
  Compare the two strings for equality and therefore palindrome.
   */

  /*
  =================Hybrid Stack and Queue approach================
  If size is even,
      Push half the string into a queue.
      Push next half the string into a stack.
  Else
    Compute the half size and round up to know the "half-way distance"
    Push half the of string + 1 into a queue.
    Push next half of the string - 1 into stack.

  While stack or queue is not empty,
    Pop off the head element from each container, compare.
    If any are not equal, break the while loop and you don't have a palindrome.

   */
  //

  return 0;
}




#include <iostream>
using namespace std;

int main()
{
    stack<string> s;
    queue<string> q;
    s.push("green"); // Top -> Bottom: Green
    q.push("green"); // Left -> Right: Green
    s.push("grey"); // Top -> Bottom: Gray, Green
    q.push("grey"); // Left -> Right: Gray, Green
    s.pop(); // Top -> Bottom: Green
    q.pop(); // Left -> Right: Gray
    cout << s.top() << endl; // Green
    cout << q.front() << endl; // Grey
    s.push("yellow"); //  Yellow, Green
    q.push("yellow"); //  Yellow, Green
    s.push("purple"); //  Purple, Yellow, Green
    q.push("purple"); // Purple, Yellow, Green
    s.pop(); // Yellow, Green
    q.pop(); // Purple, Yellow
    cout << s.top() << endl; // Yellow
    cout << q.front() << endl; // Yellow
    s.push("orange"); // Orange, Yellow, Green
    q.push("orange"); // Organge, Purple, Yellow
    s.pop(); //  Yellow, Green
    q.pop(); // Orange, Purple
    s.pop(); // Green
    q.pop(); // Orange
    cout << s.top() << endl; // Green
    cout << q.front() << endl; // Orange
    return 0;
}