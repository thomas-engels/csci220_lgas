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