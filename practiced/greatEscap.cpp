#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // read all integers from stdin so we can be flexible with online judges
    vector<int> inputs;
    int x;
    while (cin >> x)
        inputs.push_back(x);

    if (inputs.empty())
        return 0;

    size_t idx = 0;
    int testCount;
    // if the first number matches the number of following pairs, treat it as count
    if (inputs.size() >= 3 && inputs[0] == (int)((inputs.size() - 1) / 2)) {
        testCount = inputs[0];
        idx = 1;
    } else {
        // otherwise process every pair until EOF
        testCount = (int)(inputs.size() / 2);
    }

    for (int k = 0; k < testCount && idx + 1 < inputs.size(); k++)
    {
        int n = inputs[idx++];
        int l = inputs[idx++];

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

        if (k < testCount - 1)
            cout << endl; // blank line between test cases
    }

    return 0;
}