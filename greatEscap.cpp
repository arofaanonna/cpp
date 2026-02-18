#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    
    for(int k = 0; k < a; k++)
    {
        int n, l;
        cout << "Enter how many person and step: ";
        cin >> n >> l;
        
        int arr[1000] = {0};  // Use fixed size or dynamic allocation
        int alive = n;
        
        // Initialize: 1 means alive, 0 means eliminated
        for(int i = 0; i < n; i++)
        {
            arr[i] = 1;
        }
        cout << "Person initialized\n";

        int count = 0;
        int index = 0;
        
        // Eliminate until only l people remain
        while(alive > l)
        {
            if(arr[index] == 1)  // Person is alive
            {
                count++;
                if(count == l)   // Every l-th person gets eliminated
                {
                    arr[index] = 0;
                    alive--;
                    count = 0;
                    cout << "Eliminated person at position " << index + 1 << endl;
                }
            }
            index = (index + 1) % n;  // Circular movement
        }

        cout << "While Closed\n";

        // Print survivors
        cout << "Survivors: ";
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                cout << i + 1 << " ";  // Convert to 1-based for output
            }
        }
        cout << endl << endl;
    }
    return 0;
}