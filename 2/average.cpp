#include <iostream>
using namespace std;

float calculateAverage(float a, float b, float c)
{
    return (a + b + c) / 3;
}

int main()
{
    float x, y, z;
    cout<<"Enter x :";
    cin >> x ;
    cout<<"Enter y :";
    cin >> y ;
    cout<<"Enter z :";
    cin >> z ;
    cout<<"Average :" << calculateAverage(x, y, z) ;
    return 0;
}
