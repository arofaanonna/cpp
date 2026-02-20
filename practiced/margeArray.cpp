#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2) {

    if (n1 == 0 && n2 == 0)
    {
        cout << "Both arrays are empty." << endl;
        return;
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < (n1 + n2); i++) cout << merged[i] << " ";
    cout << endl;
}

int main()
{
    int n1, n2;
    cout << "Size of array 1: "; 
    cin >> n1;
    int a1[n1];
    cout<<"enter element of array 1 :";
    for(int i=0; i<n1; i++){
     cin >> a1[i];
    }


    cout << "Size of array 2: ";
    cin >> n2;
    int a2[n2];
    cout<<"enter element of array 2 :";
    for(int i=0; i<n2; i++) {
    cin >> a2[i];
    }
    mergeArrays(a1, n1, a2, n2);
    return 0;
}
