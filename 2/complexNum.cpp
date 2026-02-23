#include <iostream>
using namespace std;

void addComplex(float r1, float i1, float r2, float i2)
{
    cout << r1 + r2 << " + " << i1 + i2 << "i" << endl;
}

void subtractComplex(float r1, float i1, float r2, float i2)
{
    cout << r1 - r2 << " + " << i1 - i2 << "i" << endl;
}

void multiplyComplex(float r1, float i1, float r2, float i2)
{
    cout << (r1 * r2 - i1 * i2) << " + " << (r1 * i2 + r2 * i1) << "i" << endl;
}

int main()
{
    float real1, imag1, real2, imag2;
    cin >> real1 >> imag1 >> real2 >> imag2;
    addComplex(real1, imag1, real2, imag2);
    subtractComplex(real1, imag1, real2, imag2);
    multiplyComplex(real1, imag1, real2, imag2);
    return 0;
}
