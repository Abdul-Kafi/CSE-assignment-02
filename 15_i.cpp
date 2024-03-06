#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int p) : x(p) {}
};

int main() {
     A u(10);
    A &p = u;
    cout << "x = " << p.x << endl;
    p.x = 20;
    cout << "x = " << u.x << endl;
    return 0;
}