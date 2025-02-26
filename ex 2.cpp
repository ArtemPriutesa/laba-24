#include <iostream>

using namespace std;
int main() {
    float a =0.5 , b = 1.0 ,c = 1.5; 
    float* p1 = &a;
    float* p2 = &b; 
//min
    if (*p1 > *p2) {
        p1 = p2;
    }
    if (*p1 > c) {
        p1 = &c;
    }
//max
    if (*p2 < c) {
        p2 = &c;
    }
    cout << "min: " << *p1 << ", adr: " << p1 << endl;
    cout << "max: " << *p2 << ", adr: " << p2 << endl;

    return 0;
}
