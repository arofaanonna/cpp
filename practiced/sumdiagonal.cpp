#include <iostream>
using namespace std;

void sumDiagonal(int n)
{
    int matrix[n][n];
    cout << "Enter matrix elements (" << n << "x" << n << "):" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    cout << "The diagonal sum is: " << sum << endl;
}

int main()
{
    int n;
    cout << "Enter the size n of square matrix: ";
    cin >> n;

    sumDiagonal(n);
    return 0;
}
