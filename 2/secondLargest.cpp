#include <iostream>
#include <climits>
using namespace std;

void secondLargest(int arr[], int n)
{
    if (n < 2)
        {
          cout << "Array must have at least 2 elements." << endl;
          return;
        }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
          {
            second = largest;
            largest = arr[i];
          }
        else if (arr[i] > second && arr[i] != largest)
          {
            second = arr[i];
          }
    }

    if (second == INT_MIN)
       {
        cout << "No distinct second largest element found." << endl;
       }
    else
      {
        cout << "Second Largest: " << second << endl;
      }
}

int main() {
    int n;
    cout << "Enter size n: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    secondLargest(arr, n);
    return 0;
}
