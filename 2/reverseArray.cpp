#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    if (n <= 0)
        {
           cout << "The array is empty." << endl;
        }
    else
    {
        cout << "Reversed array: ";
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    if (n > 0)
        {
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++)
            cin >> arr[i];
        }

    reverseArray(arr, n);
    return 0;
}