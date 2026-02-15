#include <iostream>
using namespace std;

int main() {
    double temp, result;
    int choice;
    
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter choice (1 or 2): ";
    cin >> choice;
    
    if(choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9.0/5.0) + 32;
        cout << temp << "C = " << result << "F" << endl;
    }
    else if(choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5.0/9.0;
        cout << temp << "F = " << result << "C" << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}