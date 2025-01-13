#include <iostream>

using namespace std;

class point {
    public:
    int x, y;
    point() { x = 0; y = 0; }
    point(int d1, int d2) { x = d1; y = d2; }
};
point operator+(point t, point u) { return point(t.x + u.x, t.y + u.y); }

ostream& operator<<(ostream& out, point p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
template <typename T>
void print_sum(T* arr, unsigned int len) {
    if (len == 0) return;
    T acc = arr[0];
    for (unsigned int i = 1; i < len; i++) {
        acc = acc + arr[i];
    }
    cout << acc << endl;
}
int main() {
    int iarr[4] = {1, 2, 3, 4};
    print_sum(iarr, 4);
    string sarr[3] = {"blue", "red", "yellow"};
    print_sum(sarr, 3);
    point parr[2];
    parr[0].x = 10;
    parr[0].y = 20;
    parr[1].x = -5;
    parr[1].y = 17;
    print_sum(parr, 2);
    return 0;
}