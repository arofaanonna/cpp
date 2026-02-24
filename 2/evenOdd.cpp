#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int n)
{
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            {
              even++;
            }
        else
        {
          odd++;
        }
    }
    cout << " Even Numbers: " << even << '\n';
    cout << " Odd Numbers: " << odd << '\n';
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter integers: ";
    for (int i = 0; i < n; i++)
        {
          cin >> arr[i];
        }

    countEvenOdd(arr, n);
    return 0;
}
