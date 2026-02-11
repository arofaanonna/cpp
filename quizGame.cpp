#include <iostream>
#include <string>
using namespace std;

bool question(string q, string a, string b, string c, string d, int correct)
{
    int userChoice;
    cout << "\n--------------------" << endl;
    cout << q << endl;
    cout << " 1." << a << " \t2." << b << endl;
    cout << " 3." << c << " \t4." << d << endl;
    cout << "Enter your choice (1-4): ";
    cin >> userChoice;

    if (userChoice == correct)
    {
        cout << "Correct!" << endl;
        return true;
    }
    if (userChoice == 0)
    {
        cout << "Quiting...You earned points!" << endl;
        return false;
    }
    cout << "Wrong! Game Over." << endl;
    return false;
}

int main()
{
    cout << "Welcome to the game!" << endl;
    if (!question("Which is the capital of Bangladesh ?", "Ddghj", "Dhaka", "sylet", "sylet", 2))
        return 0;
    if (!question("Which is the capital of Bangladesh ?", "Ddghj", "Dhaka", "sylet", "sylet", 3))
        return 0;
    if (!question("Which is the capital of Bangladesh ?", "Ddghj", "Dhaka", "sylet", "sylet", 4))
        return 0;
    cout << "Amazing! You won the game!" << endl;
    return 0;
}
