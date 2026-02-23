#include <iostream>
using namespace std;

void addDistance(int f1, int i1, int f2, int i2)
{
    int totalFeets = f1 + f2;
    int totalInches = i1 + i2;
    if (totalInches >= 12)
     {
        totalFeets += totalInches / 12;
        totalInches = totalInches % 12;
     }
    cout << totalFeets << " feet " << totalInches << " inches" << endl;
}

int main()
{
    int f1, i1, f2, i2;
    cout<<"Enter feet1 :"<<endl;
    cin >> f1;
    cout<<"Enter inch1 :"<<endl;
    cin >> i1;
    cout<<"Enter feet2 :"<<endl;
    cin >> f2;
    cout<<"Enter inch2 :"<<endl;
    cin >> i2;
    addDistance(f1, i1, f2, i2);
}