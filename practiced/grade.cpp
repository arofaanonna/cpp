#include <iostream>
using namespace std;
void calculateGrade(int marks[], int n)
{
    for (int i = 0; i < n; i++)
        {
        cout << "Student " << i + 1 << " (Mark: " << marks[i] << ") Grade: ";
        if (marks[i] >= 90)
          {
             cout << "A+" << endl;
          }
       else if (marks[i] >= 80)
          {
             cout << "A" << endl;
          }
       else if (marks[i] >= 70)
          {
            cout << "B" << endl;
          }
       else if (marks[i] >= 60)
          {
            cout << "C" << endl;
          }
       else if (marks[i] >= 50)
          {
            cout << "D" << endl;
          }
       else
          {
            cout << "F (Fail)" << endl;
          }
    }
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];
    cout << "Enter marks for " << n << " students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    calculateGrade(marks, n);
    return 0;
}
