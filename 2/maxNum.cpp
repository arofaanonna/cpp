#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int maxValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum number: " << findMax(arr, n) << endl;
    return 0;
}
