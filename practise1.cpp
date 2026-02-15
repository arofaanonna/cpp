#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    
    // Method 1: Using temp variable
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (temp): a=" << a << ", b=" << b << endl;
    
    // Reset for method 2
    int c = 10, d = 20;
    cout << "\nBefore swap: c=" << c << ", d=" << d << endl;
    
    // Method 2: Without temp (Arithmetic)
    c = c + d;  // c = 30
    d = c - d;  // d = 10
    c = c - d;  // c = 20
    cout << "After swap (arithmetic): c=" << c << ", d=" << d << endl;
    
    // Method 3: XOR (for integers)
    int e = 5, f = 7;
    cout << "\nBefore swap: e=" << e << ", f=" << f << endl;
    e = e ^ f;
    f = e ^ f;
    e = e ^ f;
    cout << "After swap (XOR): e=" << e << ", f=" << f << endl;
    
    return 0;
}