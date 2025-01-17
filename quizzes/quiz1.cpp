#include <iostream>

using namespace std;
// -------------------------- Question 2: Find the segmentation fault and other memory issue --------------------------//

//int main () {
//
//    int ** matrix = new int * [1024]; // pointer to an integer pointer to an array of 1024 integer pointers
//    for ( int i = 0; i < 1024; i ++) {
//        *(matrix + i)  = new int [100]; // at each pointer, create a new array of 100 elements
//        for ( int j = 0; j < 100; j ++) {
//            matrix [ i ][ j ] = rand(); // assign a random number in each element
//            // *(*(matrix + i) + j) = rand(); // equivalent statement to above
//        }
//    }
//
//    //delete [] matrix; // deletes all the pointers, but fails to delete all the arrays of. 1024 arrays are leaked in memory.
//
//    double * averages = new double [1024]; // pointer to an array of doubles
//    for (int i = 0; i < 1024; i ++) {
//        averages [ i ] = 0.0; // assign 0.0 to every element in the array
//        for ( int j = 0; j < 100; j ++) {
//            // Segmentation fualt
//            averages [ i ] += matrix [ i ][ j ]; // sums all 100 values into averages
//            // accessing deallocated memory and causing a segmentation fault
//        }
//        averages [ i ] = averages [ i ] / 100.0; // calculates the average of the random number
//    }
//
//    cout << " Last average is : " << averages [1023] << endl ;
//
//    delete [] averages ;
//    for ( int i = 0; i < 1024; i ++) {
//      delete matrix[i] ; // delete each array of 100 integers from the heap
//      // delete *(matrix + i)
//    }
//    delete [] matrix ;
//}

// -------------------------- Question 3: Output --------------------------//
// A ==========================================================================================
//int main() {
//    queue<string> q;
//    stack<string> s;
//    vector<string> elements = {"orange", "banana", "grape", "apple"};
//    for (int i = 0; i < elements.size(); i++) {
//        q.push(elements[i]);
//        s.push(elements[i]);
//    }
//    q.pop();
//    s.pop();
//    q.push("mango");
//    s.push("mango");
//    q.push("papaya");
//    s.push("papaya");
//    q.pop();
//    s.pop();
//    while (!q.empty()) {
//        cout << q.front() << " ";
//        q.pop();
//    }
//    cout << endl;
//    while (!s.empty()) {
//        cout << s.top() << " ";
//        s.pop();
//    }
//    cout << endl;
//    return 0;
//}

// B ==========================================================================================

//int main ()
//{
//    float arr [5] = {10.5 , 12.0 , 18.5 , 72.5 , 0.9};
//    float * ptr1 = arr; // pointer to the first element
//    float * ptr2 = ptr1 + 3; // pointer to the fourth element, "move pointer along the array one increment at a time"
//    ptr1 ++; // pointer to the second element
//
//    cout << * ptr1 << " " ;
//    cout << * ptr2 << " " ;
//    cout << ptr2 << endl;
//    cout << ptr1 << endl;
//    cout << ptr2 - ptr1 << endl; // outputs 2
//
////    ptr2 - ptr1 = (0x100C - 0x1004) / sizeof(float)
////            = C equals in hex, so 12 - 4 as seen below
////            = (12 bytes - 4 bytes) / 4 bytes
////            = 8 / 4
////            = 2
//
//    return 0;
//}

// C ==========================================================================================

//class blue {
//public:
//    string s;
//    blue(const string & val)
//    {
//      s = val; //overloaded constructor assigning the val to member variable s
//    }
//    blue operator /(blue & b) // if dividing two blue objects
//    {
//      return blue(this->s + b.s);  //create a new blue object with the strings concatenated
//    }
//};
//
//ostream & operator <<(ostream & out, blue b) {
//    out << b.s; // output the string
//    return out;
//}
//
//template <class T>
//void do_something(T u, T v) {
//    cout << u / v << endl;
//}
//
//int main() {
//    blue x("Go");
//    blue y("Orediggers!");
//    do_something(170, 10);
//    do_something(x, y);
//    return 0;
//}

// D ==========================================================================================

//class yellow {
//public:
//    int data;
//    yellow()
//    {
//      data = 1;
//    }
//    yellow(const yellow & y)
//    {
//        data = y.data * 3;
//    }
//    yellow & operator =(const yellow & y)
//    {
//        if (&y == this) return *this;
//        data = y.data - 1;
//        return *this;
//    }
//    ~yellow()
//    {
//      cout << "Hey!" << endl;
//    }
//};
//
//int main() {
//    yellow a; // a.data = 1
//
//    // Copy constructor because of initialization
//    yellow b = a; // b.data = 3
//    yellow c = b; // c.data = 9
//
//    // Copy assigment operator
//    a = b; // a.data = 2
//    cout << a.data << " " << b.data << " " << c.data << endl;
//    c = b = a; // b.data = 1, c.data = 0
//    cout << a.data << " " << b.data << " " << c.data << endl;
//    /*
//    2 3 9
//    2 1 0
//    Hey!
//    Hey!
//    Hey!
//     */
//}
