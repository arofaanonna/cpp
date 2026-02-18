#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a;
    if (!(cin >> a))
        return 0;

    for (int k = 0; k < a; k++)
    {
        int n, l;
        cin >> n >> l;
        if (n <= 0 || l <= 0)
        {
            cout << "Invalid input\n";
            continue;
        }

        vector<int> arr(n, 1); // 1 means alive, 0 means eliminated
        int alive = n;
        int index = 0;  // current position in circle
        int count1 = 0; // step counter

        // eliminate until only l people remain
        while (alive > l)
        {
            if (arr[index] == 1)
            {
                count1++;
                if (count1 == l)
                {
                    arr[index] = 0;
                    alive--;
                    count1 = 0;
                }
            }
            index = (index + 1) % n; // wrap around
        }

        // print survivors
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cout << "Survivor: " << (i + 1) << endl;
            }
        }

        if (k < a - 1)
            cout << endl; // blank line between test cases
    }

    return 0;
}