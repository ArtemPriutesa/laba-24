#include <iostream>

using namespace std;

int main() {
    float a = 1.5, c = 2.5; 
    float* p; 

    p = &a; 
    *p *= 3; 
    *p += c; 

    p = &c; 


    cout << "&a: " << &a << endl;
    cout << "&c: " << &c << endl;
    cout << "&p: " << &p << endl;
    cout << "p: " << p << endl;
    cout << "a: " << a << endl;
    cout << "c: " << c << endl;
    cout << "p: " << *p << endl;

    return 0;
}
