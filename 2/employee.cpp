#include <iostream>
#include <string>
using namespace std;

void printEmployeeInfo(string name, int year, string address)
{
    cout << name << "\t" << year << "\t" << address << endl;
}

int main()
{
    string n1 = "Rita", n2 = "Nita", n3 = "Mita";
    int y1 = 2000, y2 = 2005, y3 = 2010;
    string a1 = "Dhaka", a2 = "Kathgara", a3 = "Savar";

    printEmployeeInfo(n1, y1, a1);
    printEmployeeInfo(n2, y2, a2);
    printEmployeeInfo(n3, y3, a3);
    return 0;
}
